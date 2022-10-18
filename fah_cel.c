/* 7. Write a C program to perform Fahrenheit to Celsius Temperature Conversion. */

#include <stdio.h>

int main(void)
{
    float cel , fah ;
    printf ("enter temperature (in Fahrenheit)  ");
    scanf ("%f",&fah);

    //conversion
    cel = (float)(5 * fah - 160) / 9;

    //output result
    printf("%.4f in Fahrenheit = %.4f Celcius \n", fah , cel);

    return 0;
}