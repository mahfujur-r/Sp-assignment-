#include <stdio.h>
int main()
{
    int size, i, max;
    scanf("%d", &size);
    int array[size];
    for (i = 0; i < size; i++)
    {
        scanf(" %d", &array[i]);
    }
    max = array[0];

    for (i = 1; i < size; i++)
    {
        if (max < array[i])
        max = array[i];
    }

    printf("maxima: %d", max);

    return 0;
 }
