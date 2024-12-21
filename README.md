![Banner](https://github.com/L1am-cd/Arduino-MorseCode/blob/f88e8f5dc8082faa632de6a5e07d58324e0763d6/ReadMeAssets/Banner.png)

`DigitalWriteMorseCode(PIN, "...---...");`
![Example ...---...](https://github.com/L1am-cd/Arduino-MorseCode/blob/e0fbc12ef58e1b90bba1ef75c410ee5b24d23e1b/ReadMeAssets/MORSE%20...---....gif)

`DigitalWriteMorseCode(PIN, "SOS");`
![Example SOS](https://github.com/L1am-cd/Arduino-MorseCode/blob/e0fbc12ef58e1b90bba1ef75c410ee5b24d23e1b/ReadMeAssets/MORSE%20SOS.gif)

## Use
1. Copy "MorseCode.h" and "MorseCode.cpp" to your Arduino Project **or** copy the files into the folder libraries/MorseCode in your Arduino installation directory. (Restart needed)
2. Add `#include <MorseCode.h>` at the top of your .ino file.
3. Use the function `DigitalWriteMorseCode(PIN, TEXT);` to send a digital signal in Morse code

You can either use `DigitalWriteMorseCode(PIN, ". -..- .- -- .--. .-.. .");` or `DigitalWriteMorseCode(PIN, "EXAMPLE");`

Supported Characters are: ABCDEFGHIJKLMNOPQRSTUVWXYZß1234567890()!?:=
