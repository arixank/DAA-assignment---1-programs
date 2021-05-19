#include<stdio.h>
#include<iostream> 
// iostream is for clearing console in LINUX

int GCD(int a, int b)
{
    int c,i;
    c = a >= b ? b:a;
    for(i = c; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return(i);
        }

    }
}

int main()
{
    system("clear"); // clearing screen
    printf("GCD computation in C\n");
    int a,b,answer;
    printf("Enter 1st number: ");
    scanf("%d",&a);

    printf("Enter 2nd number: ");
    scanf("%d",&b);

    answer = GCD(a,b);
    printf("GCD of the given number is: %d \n", answer);
    
}

