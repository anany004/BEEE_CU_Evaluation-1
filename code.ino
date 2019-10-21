 int BUTTON1 = 2;
 int BUTTON2 = 4;
 int LED1 = 8;
 int LED2 = 12;
int BUTTONstate1 = 0;
int BUTTONstate2 = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(BUTTON1, INPUT);
  pinMode(BUTTON2, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(ld,INPUT);
}

void loop()
{
  BUTTONstate1 = digitalRead(BUTTON1);
  ldv=analogRead(ld);
  if (BUTTONstate1 == HIGH ||BUTTONstate2==HIGH )
  {
    if(BUTTONstate2==LOW ||  BUTTONstate1 == LOW )
    digitalWrite(LED1, HIGH);
  } 
  else{
    digitalWrite(LED1, LOW);
  }
  BUTTONstate2 = digitalRead(BUTTON2);
  if (BUTTONstate1 == HIGH && BUTTONstate2 == HIGH )
  { digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
  }  
  else{
    digitalWrite(LED2, LOW);
  }
  }
