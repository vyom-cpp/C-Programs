#include<stdio.h>
int main()
{
    int i, add = 0;
    for(i=1; i<=100; i++)
    {
        add = add + i;
    }
    printf("Sum of numbers from 1 to 100 is %d", add);
    return 0;
}