#include <Utilities.h>

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    simpleOutput("byte: ", sizeof(byte));
    simpleOutput("word: ", sizeof(word));

    // De er det samme som:
    simpleOutput("unsigned char: ", sizeof(unsigned char));
    simpleOutput("unsigned short: ", sizeof(unsigned short));

    // De andre talltypene
    simpleOutput("signed char: ", sizeof(signed char)); // På x86 er char som regel signed, på ARM unsigned - "signed" sikrer oss her
    simpleOutput("short: ", sizeof(short));
    simpleOutput("unsigned int: ", sizeof(unsigned int));
    simpleOutput("int: ", sizeof(int));
    simpleOutput("unsigned long: ", sizeof(long));
    simpleOutput("long: ", sizeof(long));
    simpleOutput("unsigned long long: ", sizeof(unsigned long long));
    simpleOutput("long long: ", sizeof(long long));

    simpleOutput("float: ", sizeof(float));
    simpleOutput("double: ", sizeof(double));
    simpleOutput("long double: ", sizeof(long double));


    while (true);
}