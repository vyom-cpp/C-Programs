//Recursion, example of it is Factorial
//Today's HW:- Do factorial without using recursion
//Using only recursion print 1 to 6 (Don't use for and printf*6; write printf statement only once) Function ni  under function call thavu joiyea
#include<stdio.h>
int fact(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}
int main()
{
    int n, factorial;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    factorial = fact(n);
    printf("Factorial = %d", factorial);
    return 0;
}