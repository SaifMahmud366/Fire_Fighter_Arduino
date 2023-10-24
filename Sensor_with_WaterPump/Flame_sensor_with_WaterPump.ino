#define Fire_sensor 8
#define Buzzer 9
#define RedLED 10
#define GreenLED 11
#define Relay_Pin 7

#define ldelay 500

void setup() {
    Serial.begin(9600);
    pinMode(Fire_sensor, INPUT);
    pinMode(Buzzer, OUTPUT);
    pinMode(RedLED, OUTPUT);
    pinMode(GreenLED, OUTPUT);
    pinMode(Relay_Pin, OUTPUT);
}

void loop() {
    if (digitalRead(Fire_sensor) == LOW) {
        alert();
    } else {
        digitalWrite(Relay_Pin, HIGH); // Turn off the motor
        digitalWrite(Buzzer, LOW);
        digitalWrite(RedLED, LOW);
        digitalWrite(GreenLED, HIGH);
    }
}

void alert() {
    digitalWrite(Relay_Pin, LOW); // Turn on the motor
    digitalWrite(RedLED, HIGH);
    digitalWrite(Buzzer, HIGH);
    digitalWrite(GreenLED, LOW);
    delay(ldelay);
    digitalWrite(RedLED, LOW);
    digitalWrite(Buzzer, LOW);
    delay(ldelay);
    digitalWrite(RedLED, HIGH);
    digitalWrite(Buzzer, HIGH);
    delay(ldelay);
    digitalWrite(RedLED, LOW);
    digitalWrite(Buzzer, LOW);
    delay(ldelay);
    digitalWrite(RedLED, HIGH);
    digitalWrite(Buzzer, HIGH);
    delay(ldelay);
    digitalWrite(RedLED, LOW);
    digitalWrite(Buzzer, LOW);
    delay(ldelay);
}
