#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    b = a + b;
    a = b - a;
    b = b - a;
    printf("After swapping a = %d b = %d\n", a, b);
    return 0;
}