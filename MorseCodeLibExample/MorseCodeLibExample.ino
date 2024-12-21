#include "MorseCode.h"

int LED = 8;

void setup()
{

    pinMode(LED, OUTPUT);



    DigitalWriteMorseCode(LED, "...---...");
        delay(1500);
            DigitalWriteMorseCode(LED, "SOS");


  
}

void loop()
{

    // Nothing :)
    
}