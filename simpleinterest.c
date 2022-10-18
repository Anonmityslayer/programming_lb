/* 10. Write a C program to Calculate Simple Interest | Principle, Rate of interest &  
Time */

#include <stdio.h>

int main(void)
{
    float p,r,t,si;
    //taking input principle and rate
    printf("enter Principle , Rate of interest(per year) \n");
    scanf ("%f %f",&p , &r);
    //time input no negative values allowed
    do
    {
        printf("enter time period (in years) =  ");
        scanf ("%f",&t);
    }
    while (t<0);

    //simple interest calculation
    si = (float) (p * r * t)/100;

    //output
    printf("simple interest = %.4f \n",si);

    return 0;
}