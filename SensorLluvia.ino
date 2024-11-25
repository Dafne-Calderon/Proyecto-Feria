/*
sensor de lluvia

*/

#define sensor_DO A0
//#define sensor_AO A1

void setup() {
  Serial.begin(9600);
}

void loop() {

  int val = digitalRead(sensor_DO);
  Serial.print("");
  Serial.print(val);

  if (val == 1) {
    Serial.println("Humedo");
  } else {
    Serial.println("Seco");
  }

  delay(1000);
}