#include <Servo.h>
#define LDR A0
#define PTN A1
#define OUT A2
#define SWITCH 2
#define LED 5
Servo MG;
bool state[2];
bool Auto = true;

void setup()
{
    MG.attach(9);
    pinMode(LED, OUTPUT);
    pinMode(SWITCH, INPUT);
}

void loop()
{
    state[1] = state[0];
    state[0] = digitalRead(SWITCH);
    if (!state[0] && state[1])
        Auto = !Auto;
    if (!Auto)
        analogWrite(LED, 255);
    else
    {
        if (analogRead(LDR) < 513)
            analogWrite(LED, analogRead(PTN) / 4);
        else
            analogWrite(LED, 0);
    }
    MG.write(map(analogRead(OUT), 0, 1023, 0, 180));
}