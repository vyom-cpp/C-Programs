#include<stdio.h>
int main()

   /* int a, i;
    printf("Enter the value whose table is required:\n");
    scanf("%d", &a);
    for(i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n", a, i, a*i);
    }
    return 0;
}*/
{
    int i;
    for(i=1; i<=10; i++)
    {
        if(i%2!=0)
        {
            printf("\n%d",i);
        }
        else
        {
            printf("\nEven");
        }
    }
    return 0;
}