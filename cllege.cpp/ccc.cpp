#include<stdio.h> #define MAX 5 int queue[MAX]; int front=-1; int rear=-1; int item; void enqueue() { if (rear==MAX-1) { printf("Queue is Full \n"); } else { if (front==-1) { front=0; } rear=rear+1; printf("Enter Element to Insert: \n"); scanf("%d", &item); queue[rear]=item; printf("Inserted \n"); } } void dequeue() { if (front==-1 || front > rear) { printf("\n Queue Is Empty \n"); } else { item=queue[front]; if (front==rear) { rear=-1;} front=-1; else { front=front+1; printf("Deleted element: %d\n", item); } } } void display() { printf("Queue Elements: \n"); for (int i=0;i<MAX;i++) { if (front!=-1 && i>=front && i<=rear) { printf("%d \t", queue[i]); } else { printf("* \t"); } } printf("\n"); } int main () { int c; do { printf("\n Linear Queue Menu \n"); printf("1. Enqueue (Insert)\n"); printf("2. Dequeue (Delete)\n"); printf("3. Display\n"); printf("4. Exit\n"); printf("Enter your choice (1-4): "); scanf("%d", &c); switch (c) { case 1:#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;
int item;

void enqueue()
{
    if (rear == MAX - 1)
    {
        printf("Queue is Full\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }

        rear = rear + 1;

        printf("Enter Element to Insert: ");
        scanf("%d", &item);

        queue[rear] = item;

        printf("Inserted\n");
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("\nQueue Is Empty\n");
    }
    else
    {
        item = queue[front];

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = front + 1;
        }

        printf("Deleted element: %d\n", item);
    }
}

void display()
{
    printf("Queue Elements:\n");

    for (int i = 0; i < MAX; i++)
    {
        if (front != -1 && i >= front && i <= rear)
        {
            printf("%d\t", queue[i]);
        }
        else
        {
            printf("*\t");
        }
    }

    printf("\n");
}

int main()
{
    int c;

    do
    {
        printf("\nLinear Queue Menu\n");
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Delete)\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice (1-4): ");
        scanf("%d", &c);

        switch (c)
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
                printf("Program exit\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (c != 4);

    return 0;
}