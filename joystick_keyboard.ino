//
//      +---------------------------------------------+
//      |                                             |
//      |    Commodore 64 4 Axis/1 button Joystick    |
//      |                                             |
//      |                                             |
//      |  DOWN     RIGHT     LEFT     UP       FIRE  |
//      |                                             |
//      |    |        |        |        |        |    |
//      |   -+-      -+-      -+-      -+-      -+-   |
//      |  +   +    +   +    +   +    +   +    +   +  |
//      |  |   |    |   |    |   |    |   |    |   |  |
//      +---------------------------------------------+
//         |   |    |   |    |   |    |   |    |   |
//         |  \ /   |  \ /   |  \ /   |  \ /   |  \ /
//         |        |        |        |        |
//  JP7   1|       2|       3|       4|       5|
//      +---------------------------------------------+
//      |  D9       D8       D7       D6       D7     |
//      |                                             |
//      |         Sparkfun Arduino Pro Micro          +------> USB to Computer
//      |   https://www.sparkfun.com/products/12640   |
//      |                                             |
//      |      GND                                    |
//      +---------------------------------------------+
//  JP6        2|
//             \ /
//

void setup()
{
  pinMode(9, INPUT);
  digitalWrite(9, HIGH);
  pinMode(8, INPUT);
  digitalWrite(8, HIGH);
  pinMode(7, INPUT);
  digitalWrite(7, HIGH);
  pinMode(6, INPUT);
  digitalWrite(6, HIGH);
  pinMode(5, INPUT);
  digitalWrite(5, HIGH);
}

void loop()
{
  if (digitalRead(9) == 0) {
    Keyboard.write(KEY_DOWN_ARROW);
  }
  else if (digitalRead(8) == 0) {
    Keyboard.write(KEY_RIGHT_ARROW);
  }
  else if (digitalRead(7) == 0) {
    Keyboard.write(KEY_LEFT_ARROW);
  }
  else if (digitalRead(6) == 0) {
    Keyboard.write(KEY_UP_ARROW);
  }
  else if (digitalRead(5) == 0) {
    Keyboard.write(10);
  }
  else {
    return;
  }
  delay(150);
}

