const int led = 2;
const int botao = 3;

int var;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
  Serial.begin(9600);
}

void loop()
{
  var = digitalRead(botao);
  
   if(var == HIGH)
   {
     digitalWrite(led, HIGH);
     
   if(!var == LOW)
     digitalWrite(led, LOW);
   }
}
