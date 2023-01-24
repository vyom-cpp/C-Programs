// Take Something return Nothing
#include<stdio.h>
void volume(float a, float b, float c)
{
    printf("Volume is %f", a * b * c);
}
void main()
{
    float l, b, h;
    scanf("%f %f %f", &l, &b, &h);
    volume(l, b, h);
}