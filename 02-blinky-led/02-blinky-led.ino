#define LED_PIN 2


void setup() {
  pinMode(LED_PIN, OUTPUT);            // Benutzt Macro LED_PIN um GPIO2 als Ausgang zu definieren
}


void loop() {
  digitalWrite(LED_PIN, HIGH);         // Schaltet die LED an
  delay(1000);                         // Wartet 1000 Millisekunden (1 Sekunde)
  digitalWrite(LED_PIN, LOW);          // Schaltet die LED aus
  delay(1000);                         // Wartet weitere 1000 Millisekunden
}