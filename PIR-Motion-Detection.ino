int prsensor = 0;                                                                                                                                               
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  prsensor = analogRead(A0);
  Serial.println(prsensor);

  if (prsensor > 100)
  {
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    tone(10, 92, 100);
  }
  else
  {
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    noTone(10);
  }
}
