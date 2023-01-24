// Take Nothing give Nothing
#include<stdio.h>
void volume();
int main()
{
    volume();
    return 0;
}
void volume()
{
    float l, b, h, volume;
    scanf("%f %f %f", &l, &b, &h);
    volume = l * b * h;
    printf("Volume is %f", volume);
}