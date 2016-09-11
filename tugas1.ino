void setup() 
{
  // put your setup code here, to run once:
DDRB=0b1111;
DDRC=0b0000;
PORTC=0b1111;
testled();
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if(digitalRead(A0)==LOW)
    {
  //counterUP();
   PORTB = PORTB + 1;
   delay(1000);
    }
  //counterdown
  if(digitalRead(A1)==LOW)
    {
      PORTB = PORTB - 1;
      delay(1000);
    }
  //reset
  if(digitalRead(A2)==LOW)
    {
      PORTB=0;
    }
}
void testled()
{
PORTB=0b1111;
delay(100);
PORTB=0b000;
delay(100);
PORTB=0b1111;
delay(100);
PORTB=0b000;
delay(100);
PORTB=0b1111;
delay(100);
PORTB=0b000;
delay(100);
}
