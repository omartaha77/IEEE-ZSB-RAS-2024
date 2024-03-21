#include <stdio.h>
int main()
{
    int num[] = {1, 3, 5, 2, 3, 1, 4, 6, 5, 2};
    int length = sizeof(num) / sizeof(num[0]);
    int i, j, count = 0;
    for (i = 0; i < length; i++)
    {
        for (j = i + 1; j < length; j++)
        {
            if (num[i] == num[j])
            {
                count++;
            }
        }
    }
    printf("the total number of duplicate elements is: %i", count);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <stdio.h>
// int main()
// {
//     int num[] = {1, 3, 5, 2, 3, 1, 4, 6, 5, 2};
//     int length = sizeof(num) / sizeof(num[0]);
//     int i, j;
//     int y = 0;
//     int flag = 0;
//     int unique[10];
//     for (i = 0; i < length; i++)
//     {
//         flag = 0;
//         for (j = 0; j < length; j++)
//         {
//             if (i != j && num[i] == num[j])
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//         {
//             unique[y] = num[i];
//             y++;
//         }
//     }
//     printf("the unique elements is: ");
//     for (i = 0; i < y; i++)
//     {
//         printf("%d ", unique[i]);
//     }
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <stdio.h>

// void Frequency(int arr[], int size)
// {
//     int freq[size];
//     int i, j, count;
//     for (i = 0; i < size; i++)
//     {
//         freq[i] = -1;
//     }

//     for (i = 0; i < size; i++)
//     {
//         count = 1;
//         for (j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//                 freq[j] = 0;
//             }
//         }
//         if (freq[i] != 0)
//         {
//             freq[i] = count;
//         }
//     }

//     printf("Frequency of each element in the array:\n");
//     for (i = 0; i < size; i++)
//     {
//         if (freq[i] != 0)
//         {
//             printf("the frequency of %d is %d\n", arr[i], freq[i]);
//         }
//     }
// }

// int main()
// {
//     int arr[] = {5, 10, 2, 5, 50, 5, 10, 1, 2, 2};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     Frequency(arr, size);
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <stdio.h>
// int add(int *num1, int *num2)
// {
//     int result;
//     result = *num1 + *num2;
//     return result;
// }
// int main()
// {
//     int n1, n2, sum;
//     printf("enter your first number\n");
//     scanf("%d", &n1);
//     printf("enter your second number\n");
//     scanf("%d", &n2);
//     sum = add(&n1, &n2);
//     printf("Sum of the numbers = %d\n", sum);
// }

/////////////////////  Another solution to this problem  ///////////////////////////////////////////////////////////////////////////////////////////

// #include <stdio.h>
// int main()
// {
//     int num1, num2, *ptr1, *ptr2, sum;
//     printf("enter your first number\n");
//     scanf("%d", &num1);
//     printf("enter your second number\n");
//     scanf("%d", &num2);
//     ptr1 = &num1;
//     ptr2 = &num2;
//     sum = *ptr1 + *ptr2;
//     printf("Sum of the numbers = %d\n", sum);
// }
