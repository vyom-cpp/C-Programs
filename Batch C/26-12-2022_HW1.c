//HW-1: Factorial without recursion
#include<stdio.h>
int main()
{
    int i, n, fact = 1;
    printf("Enter the number:\n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is %d", n, fact);
    return 0;
} 