#include<stdio.h>
//here all function prototypes exists

void pattern1(int n);
void pattern2(int n);
void pattern3(int n);
void pattern4(int n);
void pattern5(int n);
void pattern6(int n);
void pattern7(int n);
void pattern8(int n);
void pattern9(int n);
void pattern10(int n);
void pattern11(int n);
void pattern12(int n);
void pattern13(int n);

int main(void)
{
    int n;
    printf("enter required nuber for the pattern \n");
    scanf("%d",&n);

    //pattern1
    pattern1(n);
    printf("-------------------------------------------- \n");
    pattern2(n);
    printf("-------------------------------------------- \n");
    pattern3(n);
    printf("-------------------------------------------- \n");
    pattern4(n);
    printf("-------------------------------------------- \n");
    pattern5(n);
    printf("-------------------------------------------- \n");
    pattern6(n);
    printf("-------------------------------------------- \n");
    pattern7(n);
    printf("-------------------------------------------- \n");
    pattern8(n);
    printf("-------------------------------------------- \n");
    pattern9(n);
    printf("-------------------------------------------- \n");
    pattern10(n);
    printf("-------------------------------------------- \n");
    pattern11(n);
    printf("-------------------------------------------- \n");
    pattern12(n);
    printf("-------------------------------------------- \n");



return 0;
}



void pattern1(int n)
{
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern2(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern3(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


void pattern4(int n)
{
    for(int i=0; i<n; i++)
    {
        for (int j=0; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}

void pattern5(int n)
{
    for(int i=0,var=(2*n-1); i<var; i++)
    {
        if(i<n)
        {
            for(int j=0; j<=i; j++)
            {
                printf("*");
            }
        }
        else
        {
            for(int j=1; j<(2*n-i); j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

void pattern6(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            printf(" ");
        }
        for(int k=0; k<=i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern7(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf(" ");
        }
        for(int k=0; k<n-i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern8(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            printf(" ");
        }
        for(int k=0; k<2*i+1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}


void pattern9(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf(" ");
        }
        for (int k=0; k<2*n-1-i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern10(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=n-i-1; j++)
        {
            printf(" ");
        }
        for (int k=0; k<=i; k++)
        {
            printf("* ");
        }

        printf("\n");
    }
}

void pattern11(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf(" ");
        }
        for(int k=0; k<n-i; k++)
        {
            printf("* ");
        }

        printf("\n");
    }
}


void pattern12(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf(" ");
        }
        for(int k=0; k<n-i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=n-i-1; j++)
        {
            printf(" ");
        }
        for(int k=0; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}