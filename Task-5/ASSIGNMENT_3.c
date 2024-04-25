#include <stdio.h>

void Ascending(int arr[], int size)
{
    printf("please enter %d numbers:\n", size);
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void Descending(int arr[], int size)
{
    printf("please enter %d numbers:\n", size);
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

#ifdef ASCENDING
#define FUNCTION Ascending
#elif defined(DESCENDING)
#define FUNCTION Descending
#endif

int main()
{
    int size;
    printf("please enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    FUNCTION(arr, size);

    printf("Sorted Array:");
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define ADD(x, y) (x + y)
#define SUB(x, y) (x - y)

int main()
{
#ifdef ADD_OPERATION
    int result = ADD(8, 2); // Adds 10 and 5
    printf("Result of addition: %d\n", result);
#else
    int result = SUB(8, 2);
    printf("Result of subtraction: %d\n", result);
#endif

    return 0;
}
