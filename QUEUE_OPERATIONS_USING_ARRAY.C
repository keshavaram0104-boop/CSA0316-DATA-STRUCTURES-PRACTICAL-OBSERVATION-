#include <stdio.h>

#define SIZE 3

int queue[SIZE];
int front = -1, rear = -1;

void enqueue()
{
    int item;

    if (rear == SIZE - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        printf("Enter element: ");
        scanf("%d", &item);

        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = item;

        printf("%d inserted successfully.\n", item);

        if (rear == SIZE - 1)
        {
            printf("Queue is Full\n");
        }
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("%d deleted successfully.\n", queue[front]);
        front++;

        if (front > rear)
        {
            front = rear = -1;
            printf("Queue is Empty\n");
        }
    }
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue Elements:\n");

        for (i = front; i <= rear; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n----- QUEUE MENU -----\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
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
