void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2,INPUT);
pinMode(13,OUTPUT);

}

void loop() {
  int value=digitalRead(8);
  if(value== 1){
    Serial.println("motion detect");
    digitalWrite(13,HIGH);
    }else{
      Serial.println("no motion");
       digitalWrite(13,LOW);
      }

}
