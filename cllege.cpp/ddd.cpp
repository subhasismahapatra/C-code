
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

struct Node *createNode(int value){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL){
        printf("Memory allocation failed\n");
        return NULL;
    }
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void enqueue(int value){
    struct Node *newNode = createNode(value);
    if (newNode == NULL){
        return;
    }

    if (rear == NULL){
        front = newNode;
        rear = newNode;
        return;
    }

    rear->next = newNode;
    newNode->prev = rear;
    rear = newNode;
}

void dequeue(){
    if (front == NULL){
        printf("Queue is empty\n");
        return;
    }

    struct Node *temp = front;
    printf("Dequeued element: %d\n", temp->data);
    front = front->next;

    if (front == NULL){
        rear = NULL;
    }
    else{
        front->prev = NULL;
    }

    free(temp);
}

void display(){
    if (front == NULL){
        printf("Queue is empty\n");
        return;
    }

    struct Node *temp = front;
    printf("Queue elements (front to rear):\n");
    printf("NULL <-> ");

    while (temp != NULL){
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main(){
    int n, value, choice;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &value);
        enqueue(value);
    }

    printf("Queue created:\n");
    display();

    while (1){
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
