void setup() {
  Serial.begin(1152000);
  Serial.println();
}

void loop() {
  static unsigned long loopCnt = 0;
  static unsigned long nextMill =millis() +1000;

  loopCnt++;
  if(millis()>nextMill){
  nextMill = millis()+1000;
  Serial.println(loopCnt);
  loopCnt = 0;
  }
}
