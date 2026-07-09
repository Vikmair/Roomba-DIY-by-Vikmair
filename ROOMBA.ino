//VIKMAIR
// salidas para motor 1
//int velmotor1=7;
int control1=4;
int control2=5;

//salidas para motor2
//int velmotor2 = 10;
int control3 =6;
int control4=7;

const int trig=2;
const int echo=3;

int distancia=0;
int tiempo=0;

void setup() {
 // pinMode(velmotor1,OUTPUT);
  pinMode(control1,OUTPUT);
  pinMode(control2,OUTPUT);
  
//  pinMode(velmotor2,OUTPUT);
  pinMode(control3,OUTPUT);
  pinMode(control4,OUTPUT);
  
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  Serial.begin(9600);

}

void loop() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  tiempo = (pulseIn(echo, HIGH)/2);
  distancia = float(tiempo * 0.0343);

  Serial.println(distancia);
  delay(10);

if(distancia<20){
   atras();
   delay(500);
    giro();
   delay(500);
}else{
  adelante();
}

  
}
void adelante(){
    //analogWrite (velmotor1, 180);
  digitalWrite (control1, LOW);
  digitalWrite (control2, HIGH);

 //  analogWrite (velmotor2, 180);
  digitalWrite (control3, HIGH);
  digitalWrite (control4, LOW);

}
void atras(){
  //analogWrite (velmotor1, 180);
  digitalWrite (control1, HIGH);
  digitalWrite (control2, LOW);

 //  analogWrite (velmotor2, 180);
  digitalWrite (control3, LOW);
  digitalWrite (control4, HIGH);
}
void giro(){
    //analogWrite (velmotor1, 180);
  digitalWrite (control1, LOW);
  digitalWrite (control2, HIGH);

 //  analogWrite (velmotor2, 180);
  digitalWrite (control3, LOW);
  digitalWrite (control4, LOW);
}
