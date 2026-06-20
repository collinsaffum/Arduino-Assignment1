int startValue = 5;
int ledPin = 13;

void flashLED(int times) {
     int i = 0;
     while(i < times) {
        digitalWrite(ledPin, HIGH);     // your code: blink the LED 'times' times
        delay(200);                      // ...
       
        digitalWrite(ledPin, LOW);
        delay(200);
        i = i + 1;
    }
    
}
void setup() {
     pinMode(ledPin, OUTPUT);
     Serial.begin(9600);

     Serial.println("=== Smart Countdown Starting ===");

     int count = startValue;
     while(count > 0) {
          Serial.print("Count: ");
          Serial.println(count);

          flashLED(count);      // blink the LED

          delay(1000);
          count = count - 1;
     }

     Serial.println("=== Countdown Complete ===");

}

void loop() {
  // put your main code here, to run repeatedly:

}
