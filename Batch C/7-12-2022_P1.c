#include<stdio.h>
int main()
{
    int i,value[5];
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &value[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        printf("%d", value[i]);
    }
    
    return 0;
}