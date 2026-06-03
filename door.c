#include <reg51.h>
sbit sensor = P1^0;
sbit IN1 = P1^1;
sbit IN2 = P1^2;

void delay();

void main()
{
    IN1 = 0;
    IN2 = 0;

    while(1)
    {
        if(sensor == 1)    // Object detected
        {
            IN1 = 1;       // Motor CW ? Open door
            IN2 = 0;
            delay();
            IN1 = 0;       // Stop motor after opening
        }
        else               // No object
        {
            IN1 = 0;
            IN2 = 1;       // Motor CCW ? Close door
            delay();
            IN2 = 0;       // Stop motor after closing
        }
    }
}

void delay()
{
    unsigned int i,j;
    for(i=0;i<10;i++)
        for(j=0;j<60000;j++);
}
