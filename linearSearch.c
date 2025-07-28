// Dipta Banik CSE2302029067

#include <stdio.h>
int main()
{

    int arr[10] = {2, 5, 10, 35, 44, 49, 53, 57, 86, 96}, i, x, size = 10;
    printf("Array Elements Are :");

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nWhich Array Element You Want To Search? ");
    scanf("%d", &x);

    for (i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            printf("Item Found At position : %d", i + 1);
            return 0;
        }
    }

    printf("Item Not Found!");

    return 0;
}