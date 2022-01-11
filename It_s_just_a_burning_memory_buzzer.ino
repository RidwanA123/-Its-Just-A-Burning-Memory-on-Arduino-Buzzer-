#include <pitches.h>
int buzzerPin = 2;
void setup() {
  // put your setup code here, to run once:
 pinMode(buzzerPin, OUTPUT);
 pinMode(LED_BUILTIN, OUTPUT);

for (int i = 0; i <2; i++) {
  digitalWrite(LED_BUILTIN, LOW); 
b(NOTE_CS5,1500);
b(NOTE_B4,1500);
b(NOTE_DS5,1500);
b(NOTE_CS5,1500);

delay(500);
b(NOTE_B4,400);
b(NOTE_CS5,400);
b(NOTE_DS5,400);
b(NOTE_FS5,400);
b(NOTE_E5,400);
b(NOTE_B5,400);
b(NOTE_E5,400);
b(NOTE_D5,1500);
b(NOTE_CS5,1500);
delay(600);
b(NOTE_A5,400);
b(NOTE_GS5,400);
b(NOTE_FS5,400);
b(NOTE_F5,400);
b(NOTE_FS5,400);
b(NOTE_GS5,500);

b(NOTE_DS5,400);
b(NOTE_FS5,850);

b(NOTE_CS5,400);
b(NOTE_E5,1550);
delay(700);
b(NOTE_GS5,400);
b(NOTE_FS5,400);
b(NOTE_CS5,400);
b(NOTE_DS5,400);
b(NOTE_E5,400);
b(NOTE_FS5,400);
b(NOTE_CS5,400);
b(NOTE_E5,800);
b(NOTE_DS5,800);
b(NOTE_GS5,400);
b(NOTE_G5,400);
b(NOTE_FS5,800);

//Second Verse
digitalWrite(LED_BUILTIN, HIGH); 

 b(NOTE_CS5,1500);
b(NOTE_B4,1500);
b(NOTE_DS5,900);
b(NOTE_D5,200);
b(NOTE_CS5,200);
b(NOTE_CS5,1500);
delay(300);
b(NOTE_B4,400);
b(NOTE_CS5,400);
b(NOTE_DS5,400);
b(NOTE_FS5,400);
b(NOTE_E5,400);
b(NOTE_B5,400);
b(NOTE_E5,400);
b(NOTE_D5,1500);
b(NOTE_CS5,1500);
delay(600);
b(NOTE_A5,400);
b(NOTE_GS5,400);
b(NOTE_A5,400);
b(NOTE_GS5,400);
b(NOTE_FS5,850);
b(NOTE_G5,400);
b(NOTE_GS5,850);

b(NOTE_DS5,400);
b(NOTE_FS5,850);

b(NOTE_CS5,400);
b(NOTE_E5,850);
b(NOTE_CS5,850);
b(NOTE_DS5,850);
b(NOTE_B5,850);
b(NOTE_GS5,850);

b(NOTE_E5,400);
b(NOTE_GS5,400);
b(NOTE_B5,400);
b(NOTE_AS5,400);
b(NOTE_A5,400);
b(NOTE_FS5,400);
b(NOTE_DS5,400);
b(NOTE_B4,400);


}
  
}

void b(int note,int duration) {
  tone(buzzerPin,note,1000000);
  delay(duration);
  noTone(buzzerPin);
}

void loop() {
  // put your main code here, to run repeatedly:



}
