//Take Something return Something
#include<stdio.h>
float volume(float a, float b, float c)
{
    return a * b * c;
}
void main()
{
    float l, b, h;
    scanf("%f %f %f", &l, &b, &h);
    printf("Volume is %f", volume(l, b, h));
}