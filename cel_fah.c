/*  6. Write a C program to perform Celsius to Fahrenheit Temperature Conversion.  */

#include <stdio.h>

int main(void)
{
    float cel , fah ;
    printf ("enter temperature (in Celcius)  ");
    scanf ("%f",&cel);

    //conversion
    fah = (float) (9 * cel + 160)/5 ;

    //output result
    printf("%.4f in Celcius = %.4f Fahrenheit \n", cel , fah);

    return 0;
}