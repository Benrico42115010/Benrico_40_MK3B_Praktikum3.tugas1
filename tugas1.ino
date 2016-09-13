void setup() {
  // put your setup code here, to run once:
  DDRB = 15;
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);
  PORTB=0;
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(A0) == LOW)
  {
  ledup();
  }
  else if (digitalRead(A1) == LOW)
  {
  leddown();
  }
  else if (digitalRead(A2) == LOW)
  {
    PORTB = 0;
  }
}
void ledup(){
  for (int i = 0; i < 64; i++)
  {
    PORTB = PORTB +1;
    delay(1000);  
   if (digitalRead(A1) == LOW)
  {
  break;

  }
  }
}
void leddown(){
  for (int i = 64; i >= 0; i--)
  {
    PORTB = PORTB-1 ;
    delay (1000);
   if (digitalRead(A0) == LOW)
  {
  break;
  }
  }
}
