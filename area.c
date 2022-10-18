/*  2. Write a C program to find the Area of a Rectangle by Entering Length and  
Breadth.  */

#include <stdio.h>

int main(void)
{
    float l , b, area;
     
    //taking input (no negatives)
    do
    {
        printf("enter length and breadth of rectangle \n");
        scanf ("%f %f", &l, &b);
    }
    while ((l < 0) || (b < 0));

    //area calculation
    area = l * b;
    
    //output 
    printf("area of rectangle = %.3f \n",area);
    
    return 0;
}