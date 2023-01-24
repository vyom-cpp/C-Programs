//Array of Pointers
// int a[3]; Array of Integers
// int *p[3]; Array of Integers
#include<stdio.h>
int main()
{
    int a, b, c, *x[3];
    printf("Enter the value of a, b, c:\n");
    scanf("%d%d%d", &a, &b, &c);
    x[0] = &a;
    x[1] = &b;
    x[2] = &c;
    printf("%d", x[0]);  //6422300 = Address of x[0]; 6422296 = Address of x[1]; 6422292 = Address of x[2];
    //printf("%d", *x[0]); //10
    
    return 0;
}
