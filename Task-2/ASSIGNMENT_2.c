// #include <stdio.h>
// void increment(int *ptr)
// {
//     (*ptr)++;
// }

// int main()
// {
//     int num = 5;
//     void (*ptr)(int *) = increment;
//     printf("before increment %d\n", num);
//     ptr(&num);
//     printf("after increment %d\n", num);
// }

/////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("elements\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
}