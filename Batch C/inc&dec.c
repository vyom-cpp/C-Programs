#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 1, j = 1, x=0;
    x= (i++) + (i) + (++i);
    printf("The value of x is %d",x);
    printf("%d%d%d", j++, j, ++j);
    // printf("%d%d", i,j);
    return 0;
}