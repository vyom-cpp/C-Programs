// String Reverse "Take something return ..."
#include<stdio.h>
#include<string.h>
void rev(char name[10])
{
    char temp;
    int i, length;
    length = strlen(name);
    for(i = 0;i < length/2; i++)
    {
        temp = name[i];
        name[i] = name[length - i - 1];
        name[length - i - 1] = temp;
    }
    printf("%s", name);
}
void main()
{
    char name[10];
    gets(name);
    rev(name);
    getch();
}
