#include <stdio.h>
int main()
{
    char abx;
    printf("Enter the character to get the ASCII value:\n");
    scanf("%c", &abx);
    int ascii = abx;
    printf("ASCII value of %c = %d", abx, ascii);
    return 0;
}