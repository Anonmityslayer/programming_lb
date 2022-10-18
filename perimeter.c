/* 1. Write a C program to find the Perimeter of a Rectangle by Entering Length and  
Breadth. */

#include <stdio.h>

int main(void)
{
    float l,b ,perimeter;

    //taking input ensuring no negative as lenth is not negative
    do
    {
        printf("enter the length and breadth of the rectangle (only +ve) \n");
        scanf ("%f %f" , &l ,&b);
    }
    while (( l < 0) || (b < 0)) ;

    //calculating perimeter
    perimeter = 2 * ( l + b);

    //output 
    printf("perimeter of the rectangle = %.3f  \n" , perimeter);

    return 0;
}