#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);

int main()
{
    // Q2
    uLCD.cls();
    uLCD.background_color(0xFFFFFF);
    uLCD.textbackground_color(0xFFFFFF);
    uLCD.color(0x000000);
    uLCD.cls();
    wait(1);
    uLCD.printf("\n  ID: 107061226  \n");
    uLCD.line(40, 40, 40, 80, 0x0000FF);
    uLCD.line(40, 40, 80, 40, 0x0000FF);
    uLCD.line(40, 80, 80, 80, 0x0000FF);
    uLCD.line(80, 40, 80, 80, 0x0000FF);
    wait(1);


}