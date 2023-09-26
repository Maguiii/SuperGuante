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
  if(digitalRead(indice) == HIGH){
     Serial.write('a');
     delay(50);
  } 
  if(digitalRead(mayor) == HIGH){
     Serial.write('b');
     delay(50);
  }
/////////////ADELANTE ATRAS////////////////
  if(digitalRead(anular) == HIGH){
     Serial.write('c');
     delay(50);
  }
  if(digitalRead(menique) == HIGH){
     Serial.write('d');
     delay(50);
  }
/////////////////ABAJO////////////////////
  if(digitalRead(extra) == HIGH){
     Serial.write('e');
     delay(50);
  }
/* Con esto no funciona
  if(digitalRead(indice) == LOW && digitalRead(mayor) == LOW && digitalRead(anular) == LOW && digitalRead(menique) == LOW && digitalRead(extra) == LOW){
    Serial.write('0');
    delay(50);
  }*/
}