#include<stdio.h>
int main()
{
    int i, j, A[2][2], B[2][2], C[2][2];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] * B[j][i];  //Matrix Multiplication prac
        }
    } 
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}