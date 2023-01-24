#include<stdio.h>
int main()
{
    int value;
    printf("Enter the value from 1 to 7:\n");
    scanf("%d", &value);
    if(value == 1)
    {
        printf("It's Monday");
    }
    else if(value == 2)
    {
        printf("It's Tuesday");
    }
    else if(value == 3)
    {
        printf("It's Wednesday");
    }
    else if(value == 4)
    {
        printf("It's Thursday");
    }
    else if(value == 5)
    {
        printf("It's Friday");
    }
    else if(value == 6)
    {
        printf("It's Saturday");
    }
    else if(value == 7)
    {
        printf("It's Sunday");
    }
    else
    {
        printf("Please enter the value from 1 to 7");
    }
    return 0;
}