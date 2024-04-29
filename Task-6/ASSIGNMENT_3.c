#include <stdio.h>
#define my_sizeof1(type) (char *)(&type + 1) - (char *)(&type)

int my_sizeof2(void *type)
{
    char *start = (char *)type;
    char *end = start + sizeof(*type);
    return end - start;
}

int main()
{
    double x;
    double y;
    printf("%ld\n", my_sizeof1(x));
    printf("%ld", my_sizeof2(&y));
    return 0;
}
// Macros are handled by the preprocessor and perform text substitution before compilation.
// inline keywords functions are evaluated at runtime when they are called.
// use macro is the better
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void add(Node **head, int data)
{
    Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void delete(Node **head, int data)
{
    if (*head == NULL)
    {
        return;
    }
    if ((*head)->data == data)
    {
        Node *temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    Node *prev = *head;
    Node *curr = (*head)->next;
    while (curr != NULL)
    {
        if (curr->data == data)
        {
            prev->next = curr->next;
            free(curr);
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}

void print(Node *head)
{
    if (head == NULL)
    {
        printf("Linked List is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    Node *head = NULL;
    char input;

    while (1)
    {
        printf("please enter '+', '-', 'p' or 'x': ");
        scanf(" %c", &input);

        if (input == 'x')
        {
            printf("Exiting...");
            break;
        }
        else if (input == '+')
        {
            int value;
            printf("please enter your value : ");
            scanf("%d", &value);
            add(&head, value);
        }
        else if (input == '-')
        {
            int value;
            printf("please enter your value : ");
            scanf("%d", &value);
            delete (&head, value);
        }
        else if (input == 'p')
        {
            print(head);
        }
        else
        {
            printf("Invalid input\n");
        }
    }

    Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}
