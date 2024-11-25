#include <Servo.h> // Librería del servo

Servo servo1; // Creamos un objeto de tipo Servo

// Definición de pines y variables
int PINSERVO = 6;  // Pin de señal del servo
int anguloActual = 90;   // Ángulo actual del servo
int anguloObjetivo = 90; // Ángulo objetivo del servo

int valorLDR = 0;  // Variable para almacenar los datos del sensor LDR
int pinLED1 = 12;  // Pin digital para el LED 1
int pinLED2 = 11;  // Pin digital para el LED 2
int pinLED3 = 10;  // Pin digital para el LED 3
int pinLED4 = 8;   // Pin digital para el LED 4
int pinLDR = A3;   // Pin analógico utilizado para el LDR

int valorLDR=0; //Variable para almacenar los datos que de el sensor LDR
int pinLEDA1=13;//Variable del PIN digital utilizado
int pinLEDA2=12;//Variable del PIN digital utilizado
int pinLDR=A1; //Variable para el PIN analogo utilizado

void setup() //Linea del codigo principal que se repite una sola vez
{
  pinMode(pinLEDA1,OUTPUT); //Configuracion del PIN 
  Serial.begin(9600); //Inicio del monitor para visualizar los valores del LDR
  pinMode(pinLEDA2,OUTPUT); //Configuracion del PIN 
  Serial.begin(9600); //Inicio del monitor para visualizar los valores del LDR
}

void loop() //Linea del codigo repetible 
{
  valorLDR=analogRead(pinLDR); //Leer el valor del LDR y guardarlo en la variable
  Serial.println(valorLDR); //Imprimir el valor anterior correspondiente entre 334 y 1017
  delay(100); 
  
  if (valorLDR<500){ //Condicionante para los intervalos de encendido del LED
    digitalWrite(pinLEDA1,LOW);
    digitalWrite(pinLEDA2,LOW);
}
  else if ((valorLDR>=600) & (valorLDR<=1017)){ 
    digitalWrite(pinLEDA1,HIGH);
    digitalWrite(pinLEDA2,HIGH);
  }
}