int ledPin = 13;
void setup() {
     pinMode(ledPin, OUTPUT);
     Serial.begin(9600);

     Serial.println("=== Coundown beginning ===");

     int counter = 5;                  // start the counter at 5

     while(counter > 0) {             // KEEP LOOPING while countr is greater than 6
     Serial.print("Counter is: ");
     Serial.println(counter);

     delay(1000);                    // wait 1 second between numbers
     counter = counter - 1;          //VERY IMPORTANT: decrease counter each time
     }
 
     Serial.println("Liftoff!");

     // Flash the LED 3 times to celebrate
     digitalWrite(ledPin, HIGH);  delay(200);  digitalWrite(ledPin, LOW);  delay(200);
     digitalWrite(ledPin, HIGH);  delay(200);  digitalWrite(ledPin, LOW);  delay(200);
     digitalWrite(ledPin, HIGH);  delay(200);  digitalWrite(ledPin, LOW);  delay(200);
}

void loop() {
     // Empty - countdown only runs once in setup()

}
