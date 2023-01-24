#include <stdio.h>
int main()
{
    int i, j, value[2][2];
    // for(i=0;i<2;i++)
    // {
    //     scanf("%d", &value[0][i]);
    // }
    // for(i=0;i<2;i++)
    // {
    //     scanf("%d", &value[1][i]);
    // }
    // printf("Values are %d", value[0][0]);
    // printf("Values are %d", value[0][1]);
    // printf("Values are %d", value[1][0]);
    // printf("Values are %d", value[1][1]);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &value[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", value[i][j]);
        }
        printf("\n");
    }
    return 0;
}