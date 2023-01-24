// WAP to add 2 in the given values of an array
#include<stdio.h>
void add(int a[3])
{
    for(int i = 0; i < 3; i++)
    {
        a[i] = a[i] + 2;
        printf("%d\t", a[i]);
    }
}
void main()
{
    int i, a[3];
    for(i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    add(a);
        printf("\n");
    for(i = 0; i < 3; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}