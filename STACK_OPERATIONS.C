#include <stdio.h>

#define SIZE 3

int stack[SIZE];
int top = -1;

void push()
{
    int item;

    if (top == SIZE - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter element: ");
        scanf("%d", &item);

        top++;
        stack[top] = item;

        printf("%d pushed successfully.\n", item);

        if (top == SIZE - 1)
        {
            printf("Stack is Full\n");
        }
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("%d popped successfully.\n", stack[top]);
        top--;

        if (top == -1)
        {
            printf("Stack is Empty\n");
        }
    }
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack Elements:\n");

        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n----- STACK MENU -----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Program Exited.\n");
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}
