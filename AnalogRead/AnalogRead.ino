#define Sensor A0
const byte Reads = 13;
byte c;
short Input = 0, Cache = 0, Trash;
short History[Reads];

short iRead()
{
    Trash = 0;
    for (c = 0; c < Reads; c++)
        Trash += analogRead(Sensor);
    Trash /= Reads;
    return Trash;
}

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Cache = Input;
    Input = iRead();
    Input *= 100; Input /= 1024; // map ( analogRead ( A0 ), 0, 1023, 0, 100 )
    if (Cache != Input)
    {
        for (c = 0; c < Reads - 1; c++)
            History[c] = History[c + 1];
        History[Reads - 1] = Trash;
        Serial.println("Entrada analógica: " + String(Input) + "%");
    }
}