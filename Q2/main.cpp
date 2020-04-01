#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);
PwmOut PWM1(D6);

int main()
{
    float i, j;

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

    // Q3
    i = 0;
    j = 0.1;
    PWM1.period(0.001);
    PWM1 = 0;
    while (true) {
        if (i >= 1) j = -0.1;
        if (i <= 0) j = 0.1;
        PWM1 = i;
        wait(0.1);
        i = i + j;
    }


}