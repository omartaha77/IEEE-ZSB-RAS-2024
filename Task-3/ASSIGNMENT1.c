#include <stdio.h>

float add(float num1, float num2)
{
    return num1 + num2;
}

float sub(float num1, float num2)
{
    return num1 - num2;
}

float multi(float num1, float num2)
{
    return num1 * num2;
}

float div(float num1, float num2)
{
    if (num2 == 0)
    {
        printf("you can't divide by zero \n");
        return 0;
    }
    return num1 / num2;
}

float (*operation)(float, float);

int main()
{
    int x;
    float num1, num2;

    printf("1- Addition\n");
    printf("2- Subtraction\n");
    printf("3- Multiplication\n");
    printf("4- Division\n");
    printf("please enter your choice: ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        operation = add;
        break;
    case 2:
        operation = sub;
        break;
    case 3:
        operation = multi;
        break;
    case 4:
        operation = div;
        break;
    default:
        printf("this is not an option");
        return 0;
    }

    printf("please enter your first number: ");
    scanf("%f", &num1);
    printf("please enter your second number: ");
    scanf("%f", &num2);

    printf("the result is: %.2f", operation(num1, num2));

    return 0;
}
