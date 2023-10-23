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
}

void loop() 
{
    if (digitalRead(Fire_sensor) == LOW){
        alert();
    } else {
        digitalWrite(Buzzer, LOW);
        digitalWrite(RedLED, LOW);
        digitalWrite(GreenLED, HIGH); // Turn on the green LED when no flame is detected
    }
}

void alert() {
    digitalWrite(RedLED, HIGH);
    digitalWrite(Buzzer, HIGH);
    digitalWrite(GreenLED, LOW); // Turn off the green LED during alert
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
