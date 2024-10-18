int ledPin=8; // Define o led no pino 8
void setup()
{
    pinMode(ledPin,OUTPUT);    // Led desligado
}
void loop()
{  
    digitalWrite(ledPin,HIGH); //Carga positiva no pino 8
    delay(100);               //Delay de 0,1s
    digitalWrite(ledPin,LOW);  //Carga negativa no pino 8
    delay(100);               //Delay de 0,1s
} 