#include<stdio.h>
int main()
{
    int i, value[5], key, found = 0;
    for(i=0;i<5;i++)
    {
        scanf("%d", &value[i]);
    }
    printf("Enter the key to be searched:\n");
    scanf("%d", &key);
    for(i=0;i<5;i++)
    {
        if(key == value[i])
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("Key is found");
    }
    else
    {
        printf("Key is not found");
    }
    return 0;
}