#include <stdio.h>

int main()
{
    int time;
    printf("Enter the time in the format [hh:mm:ss]: ");
    scanf("%d", &time);

    int hour = time / 10000;
    int minute = (time / 100) % 100;
    int second = time % 100;

    printf("Time is: %d:%d:%d\n", hour, minute, second);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char stopCode[] = "!!";
    int i, j, flag;
    printf("if you want end the program enter !!  \n");
    while (1)
    {
        printf("enter your string: ");
        gets(str);

        if (strcmp(str, stopCode) == 0)
        {
            printf("Exiting...\n");
            break;
        }

        for (i = 0; str[i] != '\0'; ++i)
        {
            flag = 1;
            for (j = 0; j < i; ++j)
            {
                if (str[i] == str[j])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }
}
