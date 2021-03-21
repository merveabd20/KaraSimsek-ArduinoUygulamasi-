void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  for(int i=13; i>=9; i--)
  {
   digitalWrite(i,HIGH);
   delay(500); 
   digitalWrite(i,LOW);
  }
  delay(500); //en son led sönüp anında yanıyordu bunu engellemek için ekledim
  for(int m=9; m<=13; m++)
  {
   digitalWrite(m,HIGH);
   delay(500); 
   digitalWrite(m,LOW);
  }
}
