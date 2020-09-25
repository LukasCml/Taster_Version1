/*
   Programm:          Taster schaltet LED, Pulldown
   Letzte Änderung:   25.09.2020
   Programmierer:     LC

   Hardware:      Arduino UNO / LED an Pin 3 / Taster (Schließer) an Pin 10 / Pulldown
*/

#define LED 3         //grüne LED an Pin 3
#define Taster 10     //Taster an Pin 10

boolean eingabe = 0;


void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(Taster, INPUT);
  Serial.begin(9600);
}

void loop()
{
  eingabe = digitalRead(Taster);
  digitalWrite(LED, eingabe);
  if (eingabe == 1)
  {
    Serial.println("LED an");
    delay(100);
  }
  else
  {
    Serial.println("LED aus");
    delay(100);
  }
}
