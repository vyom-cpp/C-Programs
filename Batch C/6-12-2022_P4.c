#include<stdio.h>
int main()
{
    int i,j;
     for(i=0;i<5;i++)
     {
         for(j=0;j<5-i;j++)
         {
             printf("%d ",5-i);
         }
         printf("\n");
     }
    /*for(i=0;i<4;i++)
    {
        for(k=0;k<3-i;k++)
        {
            printf(" ");
        }
        for(k=3-i;k<4;k++)
        {
            printf("* ");
        }
        printf("\n");
    }*/
}