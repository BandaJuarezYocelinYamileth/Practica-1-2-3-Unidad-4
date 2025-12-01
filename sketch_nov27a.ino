const int sensorPin = A0; // Pin S del sensor
const int buzzerPin = 11; // Buzzer pin

void setup() {
 Serial.begin(9600);
 pinMode(buzzerPin, OUTPUT);
}

void loop() {
 int valor = analogRead(sensorPin); // Lee de 0 a 1023

 int hayAgua;

 if (valor> 100) {
  hayAgua= 1; // Sí hay agua
 } else {
  hayAgua= 0; // No hay agua
 }

 Serial.println(hayAgua);

 if (hayAgua == 1){
  digitalWrite(buzzerPin, HIGH); // Suena
 } else {
  digitalWrite(buzzerPin, LOW);
 }

 delay(200);
}
