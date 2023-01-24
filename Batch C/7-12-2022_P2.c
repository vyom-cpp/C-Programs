#include<stdio.h>
int main()
{
    int i, marks[5], avg, sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d", &marks[i]);
    } 
    for(i=0;i<5;i++)
    {
         sum = sum + marks[i];
    }
    avg = sum/5;
    printf("Average of marks of student is %d", avg);
    return 0;
}