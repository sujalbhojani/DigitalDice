// Pin declarations
const int input = 4; //Pushbutton input
const int led1=12;
const int led2=11;
const int led3=10;
const int led4=9;
const int led5=8;
const int led6=7;
const int display1 = A0; // A
const int display2 = A1; // B
const int display3 = A2; // C
const int display4 = A3; // D
const int display5 = A4; // E
const int display6 = A5; // F
const int display7 = 13; // G
void setup() {
pinMode(input, INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
pinMode(display1, OUTPUT);
pinMode(display2, OUTPUT);
pinMode(display3, OUTPUT);
pinMode(display4, OUTPUT);
pinMode(display5, OUTPUT);
pinMode(display6, OUTPUT);
pinMode(display7, OUTPUT);
// Seed the random number generator
randomSeed(analogRead(7));
}
void loop() {
// Generate a random number between 1 and 6
int randomNumber = random(1,7);
// Display the number on the sevensegment display
if (digitalRead(input)==HIGH){
switch (randomNumber) {
case 1:
digitalWrite(display1, HIGH);
digitalWrite(display2, LOW);
digitalWrite(display3, LOW);
digitalWrite(display4, HIGH);
digitalWrite(display5, HIGH);
digitalWrite(display6, HIGH);
digitalWrite(display7, HIGH);
digitalWrite(led1,HIGH);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);
delay(1000);
break;
case 2:
digitalWrite(display1, LOW);
digitalWrite(display2, LOW);
digitalWrite(display3, HIGH);
digitalWrite(display4, LOW);
digitalWrite(display5, LOW);
digitalWrite(display6, HIGH);
digitalWrite(display7, LOW);
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);
delay(1000);
break;
case 3:
digitalWrite(display1, LOW);
digitalWrite(display2, LOW);
digitalWrite(display3, LOW);
digitalWrite(display4, LOW);
digitalWrite(display5, HIGH);
digitalWrite(display6, HIGH);
digitalWrite(display7, LOW);
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);
delay(1000);
break;
case 4:
digitalWrite(display1, HIGH);
digitalWrite(display2, LOW);
digitalWrite(display3, LOW);
digitalWrite(display4, HIGH);
digitalWrite(display5, HIGH);
digitalWrite(display6, LOW);
digitalWrite(display7, LOW);
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led5,LOW);
digitalWrite(led6,LOW);
delay(1000);
break;
case 5:
digitalWrite(display1, LOW);
digitalWrite(display2, HIGH);
digitalWrite(display3, LOW);
digitalWrite(display4, LOW);
digitalWrite(display5, HIGH);
digitalWrite(display6, LOW);
digitalWrite(display7, LOW);
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led5,HIGH);
digitalWrite(led6,LOW);
delay(1000);
break;
case 6:
digitalWrite(display1, LOW);
digitalWrite(display2, HIGH);
digitalWrite(display3, LOW);
digitalWrite(display4, LOW);
digitalWrite(display5, LOW);
digitalWrite(display6, LOW);
digitalWrite(display7, LOW);
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led5,HIGH);
digitalWrite(led6,HIGH);
delay(1000);
break;
}
}
}
