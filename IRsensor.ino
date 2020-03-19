
void setup() 
{
  pinMode (2, INPUT); // sensor pin INPUT
  Serial.begin(9600);
  pinMode (13, OUTPUT); // Led pin OUTPUT
}
void loop()
{
  Serial.print("IRSensorip  ");
  Serial.println(digitalRead(2));
  
  if (digitalRead(2)==0)
  {
    digitalWrite(13, LOW); // LED LOW
  }
    else
  {
    digitalWrite(13, HIGH); // LED High
  }
  
}
