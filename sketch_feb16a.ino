
int buttonState1 =1;
int buttonState2= 0;
int length = 15; 
char notes[] = "ccggaagffeeddc ";
//}//assign the pin numbers
int button1 = 1;
int button2 = 2;
 

int led1 = 4;
int led2 = 5;
//int led3 = 6;
 

int speaker1 = A1;
int speaker2 = A2;


void setup() {

  
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
 
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  
  pinMode(speaker1, OUTPUT);
  pinMode(speaker2, OUTPUT);
}
 
void action1(){
  tone(speaker1, 0); // change to whatever you want
  delay(0); // change to whatever you want
  delay(1);  // change to whatever you want
}
 
void action2(){
  tone(speaker2, 7000); // change to whatever you want
  delay(0); // change to whatever you want
  delay(1);  // change to whatever you want

}

 void loop() {
  analogWrite (motor,5);
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
//  buttonState3 = digitalRead(button3);
 
  if (buttonState1 == HIGH) {
    action1();
  } else {
    noTone(speaker1);
  }
 
  if (buttonState2 == HIGH) {
    action2();
  } else {
    noTone(speaker2);
  }
 

  }
 
