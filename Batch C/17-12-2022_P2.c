// Take Nothing return Something
#include<stdio.h>
float volume()
{
    float l, b, h, volume;
    scanf("%f %f %f", &l, &b, &h);
    return l * b * h;
}
void main()
{
    printf("Volume is %f", volume());
}