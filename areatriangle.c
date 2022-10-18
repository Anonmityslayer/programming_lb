/*  5. Write a C program to find the Area of the Triangle by Entering Height, and Base. */

#include <stdio.h>

int main (void)
{
    float height , base , area;

    //taking input no negatives allowed as length is always +ve
    do
    {
        printf ("enter the height and base (both positive) \n");
        scanf ("%f %f", &height , &base);
    }
    while ((height <= 0) || (base <= 0));

    //calculation
    area = (float) 1/2 * base * height ;

    //output
    printf("area of triangle = %.4f \n", area);

    return 0;
}