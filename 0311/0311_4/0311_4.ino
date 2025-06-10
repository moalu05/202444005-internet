#define TRIG 13
#define ECHO 12

int led_r = 7;
int led_g = 6;

void setup(){

  Serial.begin(9600);
  
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
  pinMode(led_r,OUTPUT);
  pinMode(led_g,OUTPUT);
  
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
  
  if(distance >=100){
    digitalWrite(led_r,HIGH);
    digitalWrite(led_g,LOW);
  }
  else{
    digitalWrite(led_r,LOW);
    digitalWrite(led_g,HIGH);
  }
   delay(1000);
}
