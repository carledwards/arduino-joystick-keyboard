# Ardduino Joystick Keyboard 

This project was inspired by Jason at work.  Jason has been carrying around an extra keyboard with his laptop just to have an ENTER key.

This is a retro-styled hack which incorporates an original Commodore 64 joystick and the Arduino Pro Micro.

### Schematic
```
    +---------------------------------------------+
    |                                             |
    |    Commodore 64 4 Axis/1 button Joystick    |
    |                                             |
    |                                             |
    |  DOWN     RIGHT     LEFT     UP       FIRE  |
    |                                             |
    |    |        |        |        |        |    |
    |   -+-      -+-      -+-      -+-      -+-   |
    |  +   +    +   +    +   +    +   +    +   +  |
    |  |   |    |   |    |   |    |   |    |   |  |
    +---------------------------------------------+
       |   |    |   |    |   |    |   |    |   |
       |  \ /   |  \ /   |  \ /   |  \ /   |  \ /
       |        |        |        |        |
JP7   1|       2|       3|       4|       5|
    +---------------------------------------------+
    |  D9       D8       D7       D6       D7     |
    |                                             |
    |         Sparkfun Arduino Pro Micro          +------> USB to Computer
    |   https://www.sparkfun.com/products/12640   |
    |                                             |
    |      GND                                    |
    +---------------------------------------------+
JP6        2|
           \ /
```

