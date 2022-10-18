/* 3. Write a C program to find the Diameter, Circumference and Area of a Circle. */

#include <stdio.h>

int main(void)
{
    float r , diameter , circumference , area;
    //taking input (no negative radius)
    do
    {
        printf("enter radius of circle \n");
        scanf ("%f",&r);
    }
    while (r < 0);

    //calulations
    diameter = 2 * r;
    circumference = 2 * (float) 22/7 * r ;
    area = (float) 22 /7 * r * r ;  

    //output
    printf("for radius = %f \n diameter = %.3f \n",r , diameter);
    printf("circumference = %.3f \n area = %.3f \n", circumference , area);

    return 0;
}