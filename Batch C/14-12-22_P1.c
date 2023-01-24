#include<stdio.h>
#include<string.h>
int main()
{
    //char rev;
    char name[10];
    int size, i;
    /*int i, length = 0;
    gets(name);
    for(i=0;name[i]!=NULL;i++)
    {
        length++;
    }
    printf("The length of string is %d", length);*/
    gets(name);
    size = strlen(name);
    for(i=0;i<size/2;i++)
    {
        // name[3] = name[0];
        // name[2] = name[1];
        char temp = name[i];
        name[i]=name[size-1-i];
        name[size-1-i]=temp;
    }
    printf("Reversed word is %s", name);
    return 0;
}