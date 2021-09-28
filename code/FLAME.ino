int flame = 0;
int beep = 10;
int val;

void setup() {
  pinMode(flame, INPUT);
  pinMode(beep, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  val = analogRead(flame);
  Serial.println(val);
  if(val>600)
  {
    digitalWrite(beep,HIGH);
  }
  else
  {
    digitalWrite(beep,LOW);
  }
  delay(500);
}
