// CSE23020290667 dipta banik
#include <stdio.h>
int main()
{
    int i, n, a[100], x, flags = 0;

    printf("Enter your array size : ");
    scanf("%d", &n);

    printf("Taking array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nArray elements are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nEnter searching elements : ");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            printf("The location is in in %d", i + 1);
            flags = 1;
        }
    }
    if (flags == 0)
    {
        printf("The item not found");
    }
    return 0;
}
