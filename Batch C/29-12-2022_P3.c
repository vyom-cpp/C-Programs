//Pointers 2
//%u is used for address
#include<stdio.h>
int main()
{
    int x = 10;
    int *p = &x;
    printf("%d\n%u\n%u\n%d\n%u", x, &x, p, *p, &p);
    return 0;
}