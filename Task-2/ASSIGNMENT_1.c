// #include <stdio.h>
// int main()
// {
//     int *p1;
//     char *p2;
//     long long *p3;
//     printf("\nbefore\n");
//     printf("%p\n", p1);
//     printf("%p\n", p2);
//     printf("%p\n", p3);
//     p1++;
//     p2++;
//     p3++;
//     printf("\nafter\n");
//     printf("%p\n", p1);
//     printf("%p\n", p2);
//     printf("%p\n", p3);

//     printf("\n after perform : pl++, p2++ ,p3++ the address in p1 increase by 4 becuse the size of int is 4 and p2 incrase by 1 becuse size of char is 1 finaly p3 increase by 8 becuse size of long long is 8 \n ");
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    int hexValue = 0x123456;
    int *ptr = &hexValue;

    printf("%p\n", *ptr++);
    printf("Pointer moves to the next int position but print the old content\n\n ");
    printf("%d\n", *++ptr);
    printf("moves to the next int location then use that value \n\n ");
    printf("%d\n", ++*ptr);
    printf("The value pointed at by ptr is incremented");
}
