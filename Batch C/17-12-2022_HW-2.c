// Swapping like (a,b) = (2,4) then after swapping it should be (a,b) = (4,2)
// Take Something Return Nothing
#include<stdio.h>
void swap(int a, int b)
{
     b = a + b;
    a = b - a;
    b = b - a;
}
void main()
{
    int a, b;
    scanf("%d %d", &a, &b);   
    swap(a, b);
    printf("After swapping a = %d b = %d\n", a, b);

}
