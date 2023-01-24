//Take something give something: Find maximum of 3 numbers 
#include<stdio.h>
int main()
{    
    int a, b, c;
    printf("Enter the value of a, b, c:\n");
    scanf("%d %d %d", &a, &b, &c);
    int result = max(a, b, c);
    printf("The biggest number is %d\n", result);
    return 0;
}
int max(int a, int b, int c)
{
    if(a > b)
    {
        if(a > c)
        {
            //printf("a is the biggest number\n");
            return a;
        }
        else
        {
            //printf("c is the biggest number\n");
            return c;
        }
    }
    else
    {
        if(b > c)
        {
            //printf("b is the biggest number\n");
            return b;
        }
        else
        {
            //printf("c is the biggest number\n");
            return c;
        }
    }
}