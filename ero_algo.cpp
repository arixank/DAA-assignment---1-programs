#include<stdio.h>
#include<stdlib.h>
#include<iostream>
int main()
{
    unsigned int i,j,limit = 0;
    int* prime;
    system("clear");
    printf("Enter Limit: ");
    scanf("%d",&limit);
    prime[i] = 1;
    for (j = i; i * j < limit; j++)     
    {
        prime[i * j] = 0;

    }
    printf("Result: ");
    for ( i = 2; i <= limit; i++)
    {
        if(prime[i])
        {
            printf("%d",i);
        }
    }
    
}

