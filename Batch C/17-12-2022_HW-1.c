// Take Something return Nothing (HW:- Area of Circle)
#include<stdio.h>
void area(float PI, float r)
{
    printf("Area is %f", PI * r * r);
}
void main()
{
    float PI = 3.14, r;
    scanf("%f", &r);
    area(PI, r);
}
