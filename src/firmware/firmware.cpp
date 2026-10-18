#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40);

const int NUM_SERVOS = 10;
const int SERVO_FREQ = 50;

const int SERVO_MIN_US = 500;
const int SERVO_MAX_US = 2500;

int servoAngles[NUM_SERVOS];

void setServoAngle(int channel, int angle) {
  if (channel < 0 || channel >= NUM_SERVOS) {
    Serial.println("Invalid servo channel (use 0-9).");
    return;
  }

  angle = constrain(angle, 0, 180);
  servoAngles[channel] = angle;

  int pulseUs = map(
    angle, 0, 180, SERVO_MIN_US, SERVO_MAX_US
  );

  pwm.writeMicroseconds(channel, pulseUs);

  Serial.print("Servo ");
  Serial.print(channel);
  Serial.print(" set to ");
  Serial.print(angle);
  Serial.println(" degrees");
}

void setAllServos(int angle) {
  for (int i = 0; i < NUM_SERVOS; i++) {
    setServoAngle(i, angle);
  }
}

void setup() {
  Serial.begin(115200);

  Wire.begin(21, 22);

  pwm.begin();
  pwm.setPWMFreq(SERVO_FREQ);

  delay(10);

  for (int i = 0; i < NUM_SERVOS; i++) {
    servoAngles[i] = 90;
    setServoAngle(i, 90);
  }

  Serial.println();
  Serial.println("ESP32 + PCA9685: 10-servo controller");
  Serial.println("Commands:");
  Serial.println("  3 45   = move servo channel 3 to 45 degrees");
  Serial.println("  all 90 = move all 10 servos to 90 degrees");
  Serial.println("  home   = move all servos to 90 degrees");
}

void loop() {
  if (Serial.available()) {
    String command = Serial.readStringUntil('\n');
    command.trim();
    command.toLowerCase();

    if (command == "home") {
      setAllServos(90);
      return;
    }

    if (command.startsWith("all ")) {
      int angle = command.substring(4).toInt();
      setAllServos(constrain(angle, 0, 180));
      return;
    }

    // Parse: channel angle
    int separator = command.indexOf(' ');

    if (separator > 0) {
      int channel = command.substring(0, separator).toInt();
      int angle = command.substring(separator + 1).toInt();

      setServoAngle(channel, angle);
    } else {
      Serial.println("Invalid command. Example: 3 45");
    }
  }
}