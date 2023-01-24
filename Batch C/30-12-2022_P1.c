//Double Pointers
//Block will get added in Pointers
#include<stdio.h>
/*int main()
{
    int x = 10;
    int *p = &x;
    int **q = &p;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d", x, &x, p, *p, q, *q, **q, &p, &q);
    return 0;
}*/
int main()
{
    int x[4], i;
    for(i = 0; i < 4; i++)
    {
        scanf("%d", &x[i]);
    }
   
   // for(i = 0; i < 4; i++) For printing all the same values 1234 *(x + i)
   //printf("%d", *(x + 2)); In the for loop
     printf("%d", x + 2); // For getting the address of a[2] = 3  
    
    return 0;
}