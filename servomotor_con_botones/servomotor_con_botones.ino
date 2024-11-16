#include <Servo.h> //libreria del servo

Servo servo1; //creamos objetos

int PINSERVO=6;  //señal del servo en pin 6
 
int GRADOINI=750; //equivale 750ms=0º
int GRADOFIN=90; //equivale 360ms=360º
int ANGULO=0;   //angulo a cargar en el servo
int SUMA=9; //pulsador suma
int RESTA=13; //pulsador resta

void setup() {
  servo1.attach (PINSERVO,GRADOINI,GRADOFIN); //inicializo el servo 
  pinMode (SUMA,INPUT);  //pulsador suma como salida
  pinMode (RESTA,INPUT); //pulsador resta como salida
  servo1.write (ANGULO);  //posiciono el servo al angulo declarado
 
}

void loop() {
  if (digitalRead (SUMA) == LOW){ //pregunto cuando pulsador suma esta en bajo(pulsado)
    ANGULO=ANGULO+1;  //sumo grados, tambien se lo podria poner angulo++
    if (ANGULO >=90){ //hacemos que el maximo que alcance es 360 grados
      ANGULO=90;
      }
    }
  if (digitalRead (RESTA) ==LOW){ //pregunto cuando pulsador resta esta en bajo(pulsado)
    ANGULO=ANGULO-1;  //resto grados, tambien se lo podria poner angulo--
    if (ANGULO <=0){  //hacemos que el minimo que alcance es 0 grados
      ANGULO=0;
      }
    }  
  servo1.write(ANGULO); //escribo el angulo final
  delay(10);   //espero 10ms
}