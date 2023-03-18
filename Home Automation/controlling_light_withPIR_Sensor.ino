int redpin=10;
int pirpin=7;
int pirVal=0;
void setup() {
  // put your setup code here, to run once:
pinMode(redpin,OUTPUT);
pinMode(pirpin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
pirVal=digitalRead(pirpin);
Serial.print("value of pir : ");
Serial.println(pirVal);
if (pirVal==1)
{
digitalWrite(redpin,HIGH);
delay(1000);
}  
else{
digitalWrite(redpin,LOW);
delay(1000);
}
}
