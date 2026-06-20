  // Varibles - change these to change how the LED behaves
  int ledPin = 13;             // pin connected to the LED
  int onTime = 500;            // milliseconds the LED stays ON
  int offTime = 500;           //milliseconds the LED stays OFF

void setup() {
    pinMode(ledPin, OUTPUT);      // pin 13 is an OUTPUT
    Serial.begin(9600);
    Serial.println("Blink started");

}

void loop() {
    digitalWrite(ledPin, HIGH);
    Serial.println("LED is ON");
    delay(onTime);

    digitalWrite(ledPin, LOW);
    Serial.println("LED is OFF");
    delay(offTime);

}
