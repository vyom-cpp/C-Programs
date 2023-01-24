#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d%d", &a,&b);
    printf("Addition is %d\n", a+b);
    printf("Subtraction is %d\n", a-b);
    printf("Multiplication is %d\n", a*b);
    if(b!=0)
    {printf("Division is %f\n", a/(float)b);
    printf("Remainder is %d\n", a%b);}
    return 0;
}