#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, newSize, i;

    printf("===== Dynamic Array Using realloc() =====\n");

    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid size!\n");
        return 1;
    }

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter new size of the array: ");
    scanf("%d", &newSize);

    if (newSize <= 0)
    {
        printf("Invalid new size!\n");
        free(arr);
        return 1;
    }

    arr = (int *)realloc(arr, newSize * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    if (newSize > n)
    {
        printf("Enter %d additional elements:\n", newSize - n);

        for (i = n; i < newSize; i++)
        {
            printf("Element %d: ", i + 1);
            scanf("%d", &arr[i]);
        }
    }

    printf("\nUpdated array:\n");

    for (i = 0; i < newSize; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    printf("Memory released successfully.\n");

    return 0;
}
