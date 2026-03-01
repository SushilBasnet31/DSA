

#include <stdio.h>
int main()
{
    int arr[] = {10, 19, 35, 46, 59, 64, 93, 102}, found = 0, key;
    int index;
    printf("enter the number to be searched : ");
    scanf("%d", &key);

    for (int i = 0; i < sizeof(arr); i++)
    {
        if (key == arr[i])
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("the entered number is found ");
    else
        printf("the entered number is not found");

    return 0;
}
