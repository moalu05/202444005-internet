#define TRIG 13
#define ECHO 12

void setup(){

  Serial.begin(9600);
  
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  
}

void loop(){
  long duration,distance;
  
  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);
  
  duration = pulseIn (ECHO,HIGH);
  distance = duration / 58.2;
  
  Serial.print("\nDIstance : ");
  Serial.print(distance);
  Serial.println(" Cm");
  delay(1000);
  
}
