//Printing 1 to 6; 1 2 3 4 5 6
//If we interchange position of display & printf statement then the output will be 6 5 4 3 2 1
#include<stdio.h>
void display(int n)
{
    if(n >= 2)
    {
        display (n - 1);
    } 
    printf("%d ", n);
}
void main()
{
    int n;
    printf("Enter the value:\n");
    scanf("%d", &n);
    display (n);
    return 0;
}