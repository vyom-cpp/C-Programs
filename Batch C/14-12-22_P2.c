#include<stdio.h>
#include<string.h>
int main()
{
    char name[20], new[20];
    int i;
    gets(name);
    for(i=0;name[i]!=NULL;i++)
    {
        new[i] = name[i];
    }
    // new[i]=NULL;
    printf("USe of strcpy is %s", new);
    return 0;
}