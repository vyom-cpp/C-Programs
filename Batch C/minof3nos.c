#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a, b, c:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b)
    {
        // a < b
        if (a < c) // a<b<c or a<c<b
        {
            printf("a is minimum");
        }
        else
        { // c<a<b
            printf("c is minimum");
        }
    }
    else
    // b<a
    {
        if (b < c)
        {
            printf("b is minimum");
        }
        else
        {
            printf("c is minimum");
        }
    }


// if(a<b && a<c)
// {
//     printf("a is minimum");
// if(b<c && b<a){
//     printf("b is minimum");
// }
// else
// {
//     printf("c is minimum");
// }
return 0;

}