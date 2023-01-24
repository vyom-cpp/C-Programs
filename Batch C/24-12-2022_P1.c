// Take Something Return Something
// Creating an array, adding the key & searching it and returning the index i.e. value of i
#include <stdio.h>
int search(int arr[5], int key)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int i, key, arr[5];
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);
    int index = search(arr, key);
    if (index == -1)
    {
        printf("Key not found");
    }

    else
    {
        printf("Key is found at %d", index);
    }
    return 0;
}