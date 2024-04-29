#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr1 = (int *)malloc(3 * sizeof(int));
    if (ptr1 == NULL)
    {
        printf("allocation failed for ptr1\n");
    }
    else
    {
        printf("allocated successfully for ptr1\n");
        printf("please enter your value for ptr1\n");
        for (int i = 0; i < 3; i++)
        {

            scanf("%i", ptr1 + i);
        }
    }

    int *ptr2 = (int *)calloc(4, sizeof(int));
    if (ptr2 == NULL)
    {
        printf("allocation failed for ptr2\n");
    }
    else
    {
        printf("allocated successfully for ptr2\n");
        printf("please enter your value for ptr2\n");
        for (int i = 0; i < 4; i++)
        {
            scanf("%i", ptr2 + i);
        }
    }

    int *ptr3 = (int *)realloc(ptr1, 5 * sizeof(int));
    if (ptr3 == NULL)
    {
        printf("reallocation failed for ptr3\n");
    }
    else
    {
        printf("reallocated successfully for ptr3\n");
        printf("please enter your value for ptr3\n");
        for (int i = 0; i < 5; i++)
        {
            scanf("%i", ptr3 + i);
        }
    }

    printf("the values for ptr1 is :\n");
    for (int i = 0; i < 3; i++)
    {
        printf(" %d\n", *(ptr1 + i));
    }

    printf("the values for ptr2 is :\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", *(ptr2 + i));
    }

    printf("the values for ptr3 is :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(ptr3 + i));
    }

    free(ptr1);
    free(ptr2);
    free(ptr3);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1 = (int *)malloc(3 * sizeof(int));
    if (ptr1 == NULL)
    {
        printf("Allocation failed for ptr1\n");
    }
    else
    {
        printf("Allocated successfully for ptr1\n");
        printf("Please enter your values for ptr1\n");
        for (int i = 0; i < 3; i++)
        {
            scanf("%i", ptr1 + i);
        }
    }

    int *ptr2 = (int *)calloc(4, sizeof(int));
    if (ptr2 == NULL)
    {
        printf("Allocation failed for ptr2\n");
    }
    else
    {
        printf("Allocated successfully for ptr2\n");
        printf("Please enter your values for ptr2\n");
        for (int i = 0; i < 4; i++)
        {
            scanf("%i", ptr2 + i);
        }
    }

    free(ptr1);
    printf("Memory for ptr1 free\n");

    int *ptr3 = (int *)malloc(6 * sizeof(int));
    if (ptr3 == NULL)
    {
        printf("Allocation failed for ptr4\n");
    }
    else
    {
        printf("Allocated successfully for ptr3\n");
        printf("Please enter your values for ptr3\n");
        for (int i = 0; i < 6; i++)
        {
            scanf("%i", ptr3 + i);
        }
    }

    // ptr1 is so the output will be garbage value
    printf("The values for ptr1 are:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *(ptr1 + i));
    }

    printf("The values for ptr2 are:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", *(ptr2 + i));
    }

    printf("The values for ptr4 are:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", *(ptr3 + i));
    }

    free(ptr2);
    free(ptr3);
}
///////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
int main()
{
    int length;
    printf("pleease enter the maximum for the name: ");
    scanf("%d", &length);
    fflush(stdin);
    char str[length];
    printf("\nplease enter your name :");
    gets(str);
    printf("\nyour name is:%s \n", str);

    int frequency[256] = {0};
    for (int i = 0; i < length; i++)
    {
        char y = str[i];
        int index = (int)y;
        frequency[index]++;
    }

    char repeat;
    int more_frequency = 0;
    for (int i = 0; i < 256; i++)
    {
        if (frequency[i] > more_frequency)
        {
            more_frequency = frequency[i];
            repeat = (char)i;
        }
    }

    printf("The most repeated character in your name is '%c'\nwith frequency %d\n", repeat, more_frequency);
}