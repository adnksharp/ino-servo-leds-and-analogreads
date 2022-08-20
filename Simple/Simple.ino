#define led LED_BUILTIN

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  analogWrite(led, 255 - map(analogRead(A0), 50, 970, 0, 255));
}
