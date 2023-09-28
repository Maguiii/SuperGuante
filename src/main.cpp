#include <Arduino.h>

#define indice A0 //IZQUIERDA 3
#define mayor A1 //DERECHA 1
#define anular A2 //ADELANTE 5
#define menique A3 //ATRAS 7
#define extra A4 //ABAJO 9
/*
FUNCIONA NO CAMBIAR

chekear que esten bien declarados los dedos con las intrucciones
*/
void setup() {
  
  pinMode(indice, INPUT);
  pinMode(mayor, INPUT);
  pinMode(anular, INPUT);
  pinMode(menique, INPUT);
  pinMode(extra, INPUT);
  
  Serial.begin(57600); // Configura la comunicación serial con el módulo HC-05
}

void loop() {

/////////////DERECHA IZQUIERDA//////////////
  if(digitalRead(indice) == HIGH){
     Serial.write('1');
     delay(50);
  } 
  if(digitalRead(mayor) == HIGH){
     Serial.write('3');
     delay(50);
  }
/////////////ADELANTE ATRAS////////////////
  if(digitalRead(anular) == HIGH){
     Serial.write('5');
     delay(50);
  }
  if(digitalRead(menique) == HIGH){
     Serial.write('7');
     delay(50);
  }
/////////////////ABAJO////////////////////
  if(digitalRead(extra) == HIGH){
     Serial.write('9');
     delay(50);
  }
}