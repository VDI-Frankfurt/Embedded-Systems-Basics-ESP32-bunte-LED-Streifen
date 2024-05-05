void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // Benutzt Macro LED_BUILTIN um den GPIO2 als Ausgang definieren
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // Schaltet die LED an
  delay(1000);              // Wartet 1000 Millisekunden (1 Sekunde)
  digitalWrite(LED_BUILTIN, LOW);    // Schaltet die LED aus
  delay(1000);              // Wartet weitere 1000 Millisekunden
}