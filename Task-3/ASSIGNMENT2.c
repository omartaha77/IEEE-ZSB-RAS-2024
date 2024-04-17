#include <stdio.h>

#define add(x, y) ((x) + (y))
#define sub(x, y) ((x) - (y))
#define multi(x, y) ((x) * (y))
#define div(x, y) ((x) / (y))

int main()
{
    int x;
    float num1, num2, result;

    printf("1- Addition\n");
    printf("2- Subtraction\n");
    printf("3- Multiplication\n");
    printf("4- Division\n");
    printf("please enter your choice: ");
    scanf("%d", &x);

    printf("please enter your first number: ");
    scanf("%f", &num1);
    printf("please enter your second number: ");
    scanf("%f", &num2);

    switch (x)
    {
    case 1:
        result = add(num1, num2);
        printf("the result is: %.2f", result);
        break;
    case 2:
        result = sub(num1, num2);
        printf("the result is: %.2f", result);
        break;
    case 3:
        result = multi(num1, num2);
        printf("the result is: %.2f", result);
        break;
    case 4:
        result = div(num1, num2);
        if (num2 == 0)
        {
            printf("you can't divide by zero\n");
        }
        else
        {
            printf("the result is: %.2f", result);
        }
        break;
    default:
        printf("this is not an option");
        break;
    }

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// * normal if, else if, else, *
//    "Conditional execution of code based on runtime conditions."

// * preprocessor directives #if, #elif, #else *
//    "Conditional compilation of code based on preprocessor directives and evaluated during preprocessing before compilation."
