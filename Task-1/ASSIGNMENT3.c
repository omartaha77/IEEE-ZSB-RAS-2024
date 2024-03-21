#include <stdio.h>
int main()
{
    char str[20];
    printf("please enter your srting: ");
    gets(str);
    printf("%s", str);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <stdio.h>
// int main()
// {
//     char str[20];
//     printf("please enter your srting: ");
//     gets(str);
//     int i;
//     int size = strlen(str);
//     printf("your characters: \n");
//     for (i = 0; i < size; i++)
//     {
//         printf("%c\n", str[i]);
//     }
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <stdio.h>
// int main()
// {
//     char str1[20], str2[20];
//     printf("please enter your first srting: ");
//     gets(str1);
//     printf("please enter your second srting: ");
//     gets(str2);
//     int i, flag = 0;
//     for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
//     {
//         if (str1[i] != str2[i])
//         {
//             flag = 1;
//         }
//     }
//     if (flag == 1)
//     {
//         printf("your strings are not equal");
//     }
//     else
//     {
//         printf("your strings are equal");
//     }
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[20], cstr[20];
//     printf("please enter your srting: ");
//     gets(str);
//     int i;
//     int size = strlen(str);
//     for (i = 0; i < size; i++)
//     {
//         cstr[i] = str[i];
//     }
//     cstr[i] = '\0';
//     printf("your string is: %s\n", str);
//     printf("Copied string is: %s\n", cstr);
// }