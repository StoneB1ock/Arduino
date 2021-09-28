int led_red =11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led_red, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int cds_val=analogRead(A0);
Serial.println(cds_val);
if(cds_val<=400)
{
  digitalWrite(led_red, HIGH);
}
else
{
  digitalWrite(led_red, LOW);
}
delay(200);
}
