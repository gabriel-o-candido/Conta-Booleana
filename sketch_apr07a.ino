bool A,B,C,X;
void setup() {
pinMode (2,OUTPUT);
pinMode (3, INPUT);
pinMode (4, INPUT);  
pinMode (5, INPUT);

}

void loop() {

A= digitalRead (3);
B= digitalRead (4);
C= digitalRead (5);
X= !A&&(!(A||B)&&!C);
digitalWrite (2,X);

}
