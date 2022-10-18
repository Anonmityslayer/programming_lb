/* 9. Write a C program to convert Centimetre into Meter and Kilometre */

#include <stdio.h>

int main (void)
{
    float cm , m=0 ,km=0 ;
    //taking input no negative value
    do
    {
        printf ("enter the length (in centimeter)   ");
        scanf ("%f",&cm);
    }
    while (cm < 0);
    
    //calculation
    m = (float) cm /100;
    km = (float) cm / 100000;

    //printing result
    printf(" cm = %.3f \n m = %.3f \n km = %.3f \n",cm ,m ,km);

    return 0;
}