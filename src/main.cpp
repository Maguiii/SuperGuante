#include <Arduino.h>

#define mayor A0 //IZQUIERDA 3
#define indice A1 //DERECHA 1
#define anular A2 //ADELANTE 5
#define menique A3 //ATRAS 7
#define extra A4 //ABAJO 9

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
  while(digitalRead(indice) == HIGH){
     Serial.write('1');
     delay(50);
  } 
  while(digitalRead(mayor) == HIGH){
     Serial.write('3');
     delay(50);
  }
/////////////ADELANTE ATRAS////////////////
  while(digitalRead(anular) == HIGH){
     Serial.write('5');
     delay(50);
  }
  while(digitalRead(menique) == HIGH){
     Serial.write('7');
     delay(50);
  }
/////////////////ABAJO////////////////////
  while(digitalRead(extra) == HIGH){
     Serial.write('9');
     delay(50);
  }

  while(digitalRead(indice) == LOW && digitalRead(mayor) == LOW && digitalRead(anular) == LOW && digitalRead(menique) == LOW && digitalRead(extra) == LOW){
    Serial.write('0');
    delay(50);
  }
}