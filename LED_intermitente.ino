// Designed by: Juan Rodrigo Guzman Martinez

int LED= 2; // Declaramos el pin 2 con el nombre de LED

void setup() {
pinMode(LED, OUTPUT); // Declaramos LED como una salida
}

void loop() {
digitalWrite(LED, HIGH); // Se prende el LED
delay(2000); // Esperamos una demora de 2 segundos
digitalWrite(LED, LOW); // Se apaga el LED
delay(2000); // Esperamos una demora de 2 segundos

}
