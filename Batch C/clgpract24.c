#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter the number:\n");
    scanf("%d", &a);
    for(i=2;i<a;i++)
    {
        if(a%2 == 0)
        {
            printf("%d is not a prime number\n", a);
            break;
        }
    }
    if(a == i)
    {
        printf("%d is a prime number\n", a);
    }
    return 0;
}