#include<stdio.h>
int main()
{
    int value;
    printf("Enter the value from 1 to 7:\n");
    scanf("%d", &value);
    switch(value)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Invalid input");
    }
    return 0;
}