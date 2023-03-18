int buzzpin=9;
int value;
int waterpin=A0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzpin,OUTPUT);
pinMode(waterpin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
value=analogRead(waterpin);
Serial.print("value ");
Serial.println(value);

if (value>=900){
 digitalWrite(buzzpin,HIGH);
}
else{
 digitalWrite(buzzpin,LOW);
}
}
