/*  8. Enter Marks of Five Subjects and Calculate Total, Average, Percentage using C  
programing. */

#include <stdio.h>

int main(void)
{
    float m1 ,m2, m3, m4, m5, total = 0, avg = 0 ,percentage = 0;

    //taking input for marks
    printf("enter marks for 5 subjects \n");
    printf("subject 1 = "); scanf ("%f",&m1);
    printf("subject 2 = "); scanf ("%f",&m2);
    printf("subject 3 = "); scanf ("%f",&m3);
    printf("subject 4 = "); scanf ("%f",&m4);
    printf("subject 5 = "); scanf ("%f",&m5);

    //calulations
    total = m1 + m2 + m3 + m4 + m5;
    avg = (float) total/5;
    percentage = (float) (total*100)/500;
    
    //output
    printf("total marks = %.2f \n avg marks = %.2f \n",total,avg);
    printf("percentage = %.2f%% \n",percentage);

    return 0;
}