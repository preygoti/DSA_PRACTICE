#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array, i, sum = 0;

    array = calloc(10, sizeof(int));

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Array elements are:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
        sum = sum + array[i];
    }

    printf("\nSum = %d", sum);

    free(array);

    return 0;
}
