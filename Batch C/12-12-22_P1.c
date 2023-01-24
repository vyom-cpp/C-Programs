#include<stdio.h>
#include<string.h>
int main()
{
    // char name[10] = "Vyom", i;
    char name[10], new[10];
    int a, b;
    //scanf("%s", &name);
    
    //  name[30] = "Vyom";
    // for(i=0;i<10;i++){
    //  printf("%c\n", name[i]);}

    // scanf("%s", &name);
    // printf("%s", name);
    
    gets(name);
    //puts(name);
 //   gets(new);
    //puts(new);
    //a = strlen(name);
    //strcpy(new, name);
    //printf("\nLength of string is %d", a);
    //printf("\nCopy of the string is %s", new);
    strrev(name);
    //printf("\nReversed string is %s", name);
    //strcat(name,new);
    printf("Use of STRCAT is %s", name);
    return 0;
}