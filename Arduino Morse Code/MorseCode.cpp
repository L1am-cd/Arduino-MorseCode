#include "MorseCode.h"


void sendMorse(int pin, String pattern);

void DigitalWriteMorseCode(int pin, String text) {
  const int unitDuration = 200;
    text.toUpperCase();

  for (int i = 0; i < text.length(); i++)
  {

    char c = text[i];

    switch (c)
    {

      case 'A': sendMorse(pin, ".-"); break;
        case 'B': sendMorse(pin, "-..."); break;
            case 'C': sendMorse(pin, "-.-."); break;
                case 'D': sendMorse(pin, "-.."); break;
                    case 'E': sendMorse(pin, "."); break;
                        case 'F': sendMorse(pin, "..-."); break;
                            case 'G': sendMorse(pin, "--."); break;
                                case 'H': sendMorse(pin, "...."); break;
                                    case 'I': sendMorse(pin, ".."); break;
                                        case 'J': sendMorse(pin, ".---"); break;
                                            case 'K': sendMorse(pin, "-.-"); break;
                                                case 'L': sendMorse(pin, ".-.."); break;
                                                    case 'M': sendMorse(pin, "--"); break;
                                                        case 'N': sendMorse(pin, "-."); break;
                                                            case 'O': sendMorse(pin, "---"); break;
                                                                case 'P': sendMorse(pin, ".--."); break;
                                                                    case 'Q': sendMorse(pin, "--.-"); break;
                                                                        case 'R': sendMorse(pin, ".-."); break;
                                                                            case 'S': sendMorse(pin, "..."); break;
                                                                                case 'T': sendMorse(pin, "-"); break;
                                                                                    case 'U': sendMorse(pin, "..-"); break;
                                                                                        case 'V': sendMorse(pin, "...-"); break;
                                                                                            case 'W': sendMorse(pin, ".--"); break;
                                                                                                case 'X': sendMorse(pin, "-..-"); break;
                                                                                                    case 'Y': sendMorse(pin, "-.--"); break;
                                                                                                        case 'Z': sendMorse(pin, "--.."); break;
                                                                                                            case 'ß': sendMorse(pin, "...--.."); break;

      case '.': sendMorse(pin, "."); break;
        case '-': sendMorse(pin, "-"); break;

    case '0': sendMorse(pin, "-----"); break;
        case '1': sendMorse(pin, ".----"); break;
            case '2': sendMorse(pin, "..---"); break;
                case '3': sendMorse(pin, "...--"); break;
                    case '4': sendMorse(pin, "....-"); break;
                        case '5': sendMorse(pin, "....."); break;
                            case '6': sendMorse(pin, "-...."); break;
                                case '7': sendMorse(pin, "--..."); break;
                                    case '8': sendMorse(pin, "---.."); break;
                                        case '9': sendMorse(pin, "----."); break;

    case '!': sendMorse(pin, "-.-.--"); break;
        case '?': sendMorse(pin, "..--.."); break;
            case ':': sendMorse(pin, "---..."); break;
                case '(': sendMorse(pin, "-.--."); break;
                    case ')': sendMorse(pin, "-.--.-"); break;
                        case '=': sendMorse(pin, "-...-"); break;

      case ' ': delay(unitDuration * 7); break;
      default: break;

    }

    delay(unitDuration * 3);

  }

}

void sendMorse(int pin, String pattern)
{

  const int unitDuration = 200;
  for (int i = 0; i < pattern.length(); i++)
  {

    if (pattern[i] == '.')
    {

      digitalWrite(pin, HIGH);
        delay(unitDuration);

    } 
    else if (pattern[i] == '-')
    {

      digitalWrite(pin, HIGH);
        delay(unitDuration * 3);

    }

    digitalWrite(pin, LOW);
        delay(unitDuration);

  }

}