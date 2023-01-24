#include<stdio.h>
int main()
{
    int i, num[5], max;
    for(i=0;i<5;i++)
    {
        scanf("%d", &num[i]);
    }
    max=num[0];
    for(i=0;i<5;i++)
    {
        if(num[i] > max){
            max = num[i];
        }
    }
    printf("Max is %d", max);
    return 0;
}