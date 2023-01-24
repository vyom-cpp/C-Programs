//WAP if n = 5
//55 45 35 25 15
#include<stdio.h>
void display(int n, int a)
{
    printf("%d%d\n", n, a);
    if(n >= 2)
    {
        display (n - 1, a);
    } 
}
void main()
{
    int n;
    printf("Enter the value:\n");
    scanf("%d", &n);
    display(n,n);
    return 0;
}