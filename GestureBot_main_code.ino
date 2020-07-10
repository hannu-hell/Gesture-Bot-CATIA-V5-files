#include <Servo.h>

Servo servo1;
Servo servo2; // Ring finger down
Servo servo3; // little finger up
Servo servo4; // Ring finger up
Servo servo5;
Servo servo7;
Servo servo6;
Servo servo8;
Servo servo9;
Servo servo10;

int servoPosA = 170;
int servoPosB = 160;
int servoPosC = 100;
int servoPosD = 100;
int servoPosE = 120;
int servoPosF = 100;
int servoPosG = 100;
int servoPosH = 100;
int servoPosI = 120;
int servoPosJ = 100;


int led1 = 24; // single led
int led2 = 25; // single led
int ledSet1 = 12; // LED SET
int ledSet2 = 13; // LED SET
int BUTTON = 22;
boolean buttonState = LOW;
int i;


int pulPin1 = 52;
int dirPin1 = 53;
int pulPin2 = 50;
int dirPin2 = 51;

void setup() {
  for (int q = 2; q < 14; q++){
  pinMode(q, OUTPUT);
  }
  pinMode(22, INPUT);
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT);
  for (int w = 50; w < 54; w++){
  pinMode(w, OUTPUT);
  }
  
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);
  servo7.attach(7);
  servo6.attach(8);
  servo8.attach(9);
  servo9.attach(10);
  servo10.attach(11);

  delay(4000);

 while (buttonState == LOW){
  for (int e = 0; e < 1; e++){
  digitalWrite(dirPin1, HIGH);
  buttonState = digitalRead(BUTTON);
  digitalWrite(pulPin1, HIGH);
  buttonState = digitalRead(BUTTON);
  delayMicroseconds(5000);
  buttonState = digitalRead(BUTTON);
  digitalWrite(pulPin1, LOW);
   buttonState = digitalRead(BUTTON);
  delayMicroseconds(5000);
  buttonState = digitalRead(BUTTON);
  } 
}
  if (buttonState == HIGH){
    for (int g = 0; g < 300; g++){
      digitalWrite(dirPin1, LOW);
      digitalWrite(pulPin1, HIGH);
      delayMicroseconds(10000);
      digitalWrite(pulPin1, LOW);
      delayMicroseconds(10000);
    }
  }
  
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(2000);

}

void loop() {

servoPosA = constrain(servoPosA, 80, 170);
servoPosB = constrain(servoPosB, 90, 180);
servoPosC = constrain(servoPosC, 100, 150);
servoPosD = constrain(servoPosD, 100, 150);
servoPosE = constrain(servoPosE, 75, 160);
servoPosF = constrain(servoPosF, 100, 150);
servoPosG = constrain(servoPosG, 85, 170);
servoPosH = constrain(servoPosH, 100, 150);
servoPosI = constrain(servoPosI, 10, 180);
servoPosJ = constrain(servoPosJ, 100, 150);

servo9.write(servoPosI);
delay(10);
servo10.write(servoPosJ);
delay(50);
servo6.write(servoPosG);
delay(10);
servo8.write(servoPosH);
delay(50);
servo5.write(servoPosE);
delay(10);
servo7.write(servoPosF);
delay(50);
servo2.write(servoPosB);
delay(10);
servo4.write(servoPosD);
delay(50);
servo1.write(servoPosA);
delay(10);
servo3.write(servoPosC);
delay(3000);

led_startup();


 
delay(500);


wrist_motor(HIGH, 200, 3000);

delay(100);

wrist_motor(LOW, 200, 3000);

delay(1000);


for (int u = 0; u < 3; u++){
  for (servoPosG = 100; servoPosG > 85; servoPosG--){
    servo6.write(servoPosG);
    delay(5);
  }
  for (servoPosH = 100; servoPosH < 150; servoPosH++){
    servo8.write(servoPosH);
    delay(5);
  }
  for (servoPosE = 120; servoPosE > 75; servoPosE--){
    servo5.write(servoPosE);
    delay(5);
  }
  for (servoPosF = 100; servoPosF < 150; servoPosF++){
    servo7.write(servoPosF);
    delay(5);
  }
  for (servoPosB = 160; servoPosB > 90; servoPosB--){
    servo2.write(servoPosB);
    delay(5);
  }
  for (servoPosD = 100; servoPosD < 150; servoPosD++){
    servo4.write(servoPosD);
    delay(5);
  }
  for (servoPosA = 170; servoPosA > 80; servoPosA--){
    servo1.write(servoPosA);
    delay(5);
  }
  for (servoPosC = 100; servoPosC < 150; servoPosC++){
    servo3.write(servoPosC);
    delay(5);
  }
  for (servoPosI = 120; servoPosI > 80; servoPosI--){
    servo9.write(servoPosI);
    delay(5);
  }
  for (servoPosJ = 100; servoPosJ < 150; servoPosJ++){
    servo10.write(servoPosJ);
    delay(5);
  }

  delay(500);

//REVERSE CYCLE

  for (servoPosI = 80; servoPosI < 120; servoPosI++){
    servo9.write(servoPosI);
    delay(5);
  }
  for (servoPosJ = 150; servoPosJ > 100; servoPosJ--){
    servo10.write(servoPosJ);
    delay(5);
  }
  for (servoPosA = 80; servoPosA < 170; servoPosA++){
    servo1.write(servoPosA);
    delay(5);
  }
  for (servoPosC = 150; servoPosC > 100; servoPosC--){
    servo3.write(servoPosC);
    delay(5);
  }
  for (servoPosB = 90; servoPosB < 160; servoPosB++){
    servo2.write(servoPosB);
    delay(5);
  }
  for (servoPosD = 150; servoPosD > 100; servoPosD--){
    servo4.write(servoPosD);
    delay(5);
  }
  for (servoPosE = 75; servoPosE < 120; servoPosE++){
    servo5.write(servoPosE);
    delay(5);
  }
  for (servoPosF = 150; servoPosF > 100; servoPosF--){
    servo7.write(servoPosF);
    delay(5);
  }
  for (servoPosG = 85; servoPosG < 100; servoPosG++){
    servo6.write(servoPosG);
    delay(5);
  }
  for (servoPosH = 150; servoPosH > 100; servoPosH--){
    servo8.write(servoPosH);
    delay(5);
  }
}
  delay(1000);




//THUMBS UP
elbow_motor(HIGH, 150, 10000);

wrist_motor(HIGH, 400, 3000);


for (servoPosI = 120; servoPosI > 10; servoPosI--){
  servo9.write(servoPosI);
  delay(20);
}
for (servoPosJ = 100; servoPosJ < 150; servoPosJ++){
  servo10.write(servoPosJ);
  delay(20);
}

for (servoPosB = 160; servoPosB < 180; servoPosB++){
  servo2.write(servoPosB);
  delay(20);
}

for (servoPosE = 120; servoPosE < 160; servoPosE++){
  servo5.write(servoPosE);
  delay(20);
}

for (servoPosG = 100; servoPosG < 170; servoPosG++){
  servo6.write(servoPosG);
  delay(20);
}

delay(4000);

for (servoPosI = 10; servoPosI < 80; servoPosI++){
  servo9.write(servoPosI);
  delay(20);
}
for (servoPosJ = 150; servoPosJ > 125; servoPosJ--){
  servo10.write(servoPosJ);
  delay(20);
}
for (servoPosA = 170; servoPosA > 80; servoPosA--){
  servo1.write(servoPosA);
  delay(5);
}
for (servoPosC = 100; servoPosC < 125; servoPosC++){
  servo3.write(servoPosC);
  delay(5);
}
for (servoPosB = 180; servoPosB > 90; servoPosB--){
  servo2.write(servoPosB);
  delay(20);
}
for (servoPosD = 100; servoPosD < 125; servoPosD++){
  servo4.write(servoPosD);
  delay(5);
}
for (servoPosE = 160; servoPosE > 75; servoPosE--){
  servo5.write(servoPosE);
  delay(20);
}
for (servoPosF = 100; servoPosF < 125; servoPosF++){
  servo7.write(servoPosF);
  delay(5);
}
for (servoPosG = 170; servoPosG > 85; servoPosG--){
  servo6.write(servoPosG);
  delay(20);
}
for (servoPosH = 100; servoPosH < 125; servoPosH++){
  servo8.write(servoPosH);
  delay(5);
}



delay(500);

elbow_motor(LOW, 150, 10000);
wrist_motor(LOW, 400, 3000);
/*
for (int d = 400; d > 0; d--){
  digitalWrite(dirPin2, LOW);
  digitalWrite(pulPin2, HIGH);
  delayMicroseconds(3000);
  digitalWrite(pulPin2, LOW);
  delayMicroseconds(3000);
}*/

/*
for (i = 0; i < 255; i++){
  analogWrite(ledSet1, i);
  analogWrite(ledSet2, i);
  delay(10);
}
for (int j = 0; j < 5; j++){
  digitalWrite(ledSet1, HIGH);
  digitalWrite(ledSet2, LOW);
  delay(200);
  digitalWrite(ledSet1, LOW);
  digitalWrite(ledSet2, HIGH);
  delay(200);
}
for (i = 255; i > 0; i--){
  analogWrite(ledSet1, i);
  analogWrite(ledSet2, i);
  delay(10);
}
*/
delay(1000);


for (servoPosA = 80; servoPosA < 170; servoPosA++){
  servo1.write(servoPosA);
  delay(5);
}
for (servoPosC = 125; servoPosC > 100; servoPosC--){
  servo3.write(servoPosC);
  delay(5);
}
for (servoPosB = 90; servoPosB < 180; servoPosB++){
  servo2.write(servoPosB);
  delay(20);
}
for (servoPosD = 125; servoPosD > 100; servoPosD--){
  servo4.write(servoPosD);
  delay(5);
}
for (servoPosI = 10; servoPosI < 80; servoPosI++){
  servo9.write(servoPosI);
  delay(20);
}
/*for (servoPosJ = 125; servoPosJ < 150; servoPosJ++){
  servo10.write(servoPosJ);
  delay(20);
}*/

wrist_motor(HIGH, 50, 3000);
delay(200);
wrist_motor(LOW, 100, 3000);
delay(200);
wrist_motor(HIGH, 50, 3000);

delay(2000);

wrist_motor(HIGH, 400, 3000);
delay(500);

elbow_motor(HIGH, 150, 10000);

for (i = 0; i < 255; i++){
  analogWrite(ledSet1, i);
  analogWrite(ledSet2, i);
  delay(10);
}
for (int j = 0; j < 5; j++){
  digitalWrite(ledSet1, HIGH);
  digitalWrite(ledSet2, LOW);
  delay(200);
  digitalWrite(ledSet1, LOW);
  digitalWrite(ledSet2, HIGH);
  delay(200);
}
for (i = 255; i > 0; i--){
  analogWrite(ledSet1, i);
  analogWrite(ledSet2, i);
  delay(10);
}
delay(500);

for (servoPosE = 75; servoPosE < 160; servoPosE++){
  servo5.write(servoPosE);
  delay(20);
}
for (servoPosF = 125; servoPosF > 100; servoPosF--){
  servo7.write(servoPosF);
  delay(5);
}
for (servoPosG = 85; servoPosG < 170; servoPosG++){
  servo6.write(servoPosG);
  delay(20);
}
for (servoPosH = 125; servoPosH > 100; servoPosH--){
  servo8.write(servoPosH);
  delay(5);
}

delay(500);

wrist_motor(LOW, 400, 3000);

delay(500);

elbow_motor(LOW, 150, 10000);
delay(1000);

/*for (servoPosI = 10; servoPosI < 80; servoPosI++){
  servo9.write(servoPosI);
  delay(20);
}*/

for (servoPosJ = 100; servoPosJ < 150; servoPosJ++){
  servo10.write(servoPosJ);
  delay(20);
}
for (servoPosA = 170; servoPosA > 80; servoPosA--){
  servo1.write(servoPosA);
  delay(5);
}
for (servoPosC = 100; servoPosC < 150; servoPosC++){
  servo3.write(servoPosC);
  delay(5);
}
for (servoPosB = 180; servoPosB > 90; servoPosB--){
  servo2.write(servoPosB);
  delay(20);
}
for (servoPosD = 100; servoPosD < 150; servoPosD++){
  servo4.write(servoPosD);
  delay(5);
}
for (servoPosE = 160; servoPosE > 75; servoPosE--){
  servo5.write(servoPosE);
  delay(20);
}
for (servoPosF = 100; servoPosF < 150; servoPosF++){
  servo7.write(servoPosF);
  delay(5);
}
for (servoPosG = 170; servoPosG > 85; servoPosG--){
  servo6.write(servoPosG);
  delay(20);
}
for (servoPosH = 100; servoPosH < 150; servoPosH++){
  servo8.write(servoPosH);
  delay(5);
}

delay(1000);

for (int x = 0; x > 3; x++){
  
  for (servoPosJ = 150; servoPosJ > 100; servoPosJ--){
    servo10.write(servoPosJ);
    delay(5);
    servo8.write(servoPosJ);
    delay(5);
    servo7.write(servoPosJ);
    delay(5);
    servo4.write(servoPosJ);
    delay(5);
    servo3.write(servoPosJ);
    delay(5);
  }

  for (servoPosJ = 100; servoPosJ < 150; servoPosJ++){
    servo10.write(servoPosJ);
    delay(5);
    servo8.write(servoPosJ);
    delay(5);
    servo7.write(servoPosJ);
    delay(5);
    servo4.write(servoPosJ);
    delay(5);
    servo3.write(servoPosJ);
    delay(5);
  }
}




 
}

//STEP MOTOR FUNCTIONS**************************************************************************************************************

void wrist_motor(boolean w_dir, int w_pace, int w_pace_delay){
  for (int d = 0; d < w_pace; d++){
    digitalWrite(dirPin2, w_dir);
    digitalWrite(pulPin2, HIGH);
    delayMicroseconds(w_pace_delay);
    digitalWrite(pulPin2, LOW);
    delayMicroseconds(w_pace_delay);
}
}

void elbow_motor(boolean e_dir, int e_pace, int e_pace_delay){
  for (int r = 0; r < e_pace; r++){
    digitalWrite(dirPin1, e_dir);
    digitalWrite(pulPin1, HIGH);
    delayMicroseconds(e_pace_delay);
    digitalWrite(pulPin1, LOW);
    delayMicroseconds(e_pace_delay);
  }
}

//ON START LED SETS FUNCTION********************************************************************************************************

void led_startup(){
  for (int a = 0; a < 10; a++){ 
    digitalWrite(led2, HIGH);
    digitalWrite(led1, LOW);
    delay(100);
    digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH);
    delay(100);
    }
  digitalWrite(led1, LOW);

  delay(20);

  for (i = 0; i < 255; i++){
    analogWrite(ledSet1, i);
    analogWrite(ledSet2, i);
    delay(10);
    }

  for (i = 255; i > 0; i--){
    analogWrite(ledSet1, i);
    analogWrite(ledSet2, i);
    delay(10);
  }
  delay(500);

  digitalWrite(ledSet1, HIGH);
  digitalWrite(ledSet2, HIGH);
  delay(4000);
  
  digitalWrite(ledSet1, LOW);
  digitalWrite(ledSet2, LOW);
}


