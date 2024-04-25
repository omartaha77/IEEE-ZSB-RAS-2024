#include <stdio.h>
enum operations
{
    add = '+',
    sub = '-',
    div = '/',
    mult = '*',
    AND = '&',
    OR = '|',
    NOT = '!'
};
float calculator(float operand1, float operand2, enum operations operation)
{
    switch (operation)
    {
    case add:
        return operand1 + operand2;
    case sub:
        return operand1 - operand2;
    case mult:
        return operand1 * operand2;
    case div:
        if (operand2 != 0)
            return operand1 / operand2;
        else
        {
            printf("you can not division by zero\n");
            return 0;
        }
    case AND:
        return (int)operand1 & (int)operand2;
    case OR:
        return (int)operand1 | (int)operand2;
    case NOT:
        return !(int)operand1;
    default:
        printf("Invalid operation\n");
    }
}
int main()
{
    float operand1, operand2;
    char operations;
    enum operations operation;
    printf("please enter your first operand: ");
    scanf("%f", &operand1);
    printf("please enter your second operand: ");
    scanf("%f", &operand2);
    printf("Enter operation character: ");
    scanf(" %c", &operations);

    operation = (enum operations)operations;
    printf("Result: %.2f\n", calculator(operand1, operand2, operation));
}
// Adding extra members to the enum won't change its size. Each enum constant
// still requires the same amount of memory to represent its value, typically 1 byte