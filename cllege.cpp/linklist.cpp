#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node *createNode(int value)
{
    struct node *newNode;

    newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL)
    {
        printf("Memory could not be allocated.\n");
        return NULL;
    }

    newNode->data = value;
    newNode->next = NULL;

    return newNode;
}

void insertBeginning(int value)
{
    struct node *newNode;

    newNode = createNode(value);

    if (newNode == NULL)
        return;

    newNode->next = head;
    head = newNode;

    printf("Node inserted at the beginning.\n");
}

void insertEnd(int value)
{
    struct node *newNode, *temp;

    newNode = createNode(value);

    if (newNode == NULL)
        return;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }

    printf("Node inserted at the end.\n");
}

void insertPosition(int value, int position)
{
    struct node *newNode, *temp;
    int i;

    if (position < 1)
    {
        printf("Position should start from 1.\n");
        return;
    }

    if (position == 1)
    {
        insertBeginning(value);
        return;
    }

    temp = head;

    for (i = 1; i < position - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL)
    {
        printf("Position does not exist.\n");
        return;
    }

    newNode = createNode(value);

    if (newNode == NULL)
        return;

    newNode->next = temp->next;
    temp->next = newNode;

    printf("Node inserted at position %d.\n", position);
}

void deleteBeginning(void)
{
    struct node *temp;

    if (head == NULL)
    {
        printf("The list is empty.\n");
        return;
    }

    temp = head;
    head = head->next;

    free(temp);

    printf("Node deleted from the beginning.\n");
}

void deleteEnd(void)
{
    struct node *temp, *previous;

    if (head == NULL)
    {
        printf("The list is empty.\n");
        return;
    }

    if (head->next == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        temp = head;
        previous = NULL;

        while (temp->next != NULL)
        {
            previous = temp;
            temp = temp->next;
        }

        previous->next = NULL;
        free(temp);
    }

    printf("Node deleted from the end.\n");
}

void deletePosition(int position)
{
    struct node *temp, *nodeToDelete;
    int i;

    if (position < 1)
    {
        printf("Position should start from 1.\n");
        return;
    }

    if (position == 1)
    {
        deleteBeginning();
        return;
    }

    temp = head;

    for (i = 1; i < position - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL)
    {
        printf("Position does not exist.\n");
        return;
    }

    nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;

    free(nodeToDelete);

    printf("Node deleted from position %d.\n", position);
}

void reverseList(void)
{
    struct node *previous, *current, *nextNode;

    previous = NULL;
    current = head;

    while (current != NULL)
    {
        nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }

    head = previous;

    printf("The list has been reversed.\n");
}

void searchNode(int value)
{
    struct node *temp;
    int position = 1, found = 0;

    temp = head;

    while (temp != NULL)
    {
        if (temp->data == value)
        {
            printf("Value %d found at position %d.\n",
                   value, position);

            found = 1;
        }

        temp = temp->next;
        position++;
    }

    if (!found)
        printf("Value %d was not found.\n", value);
}

void searchPosition(int position)
{
    struct node *temp;
    int currentPosition = 1;

    if (position < 1)
    {
        printf("Position should start from 1.\n");
        return;
    }

    temp = head;

    while (temp != NULL && currentPosition < position)
    {
        temp = temp->next;
        currentPosition++;
    }

    if (temp == NULL)
    {
        printf("Position does not exist.\n");
        return;
    }

    printf("Value at position %d is %d.\n",
           position, temp->data);
}

void countNodes(void)
{
    struct node *temp;
    int count = 0;

    temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    printf("Total number of nodes: %d\n", count);
}

void displayList(void)
{
    struct node *temp;

    if (head == NULL)
    {
        printf("The list is empty.\n");
        return;
    }

    temp = head;

    printf("List : ");

    while (temp != NULL)
    {
        printf("%d", temp->data);

        if (temp->next != NULL)
            printf(" -> ");

        temp = temp->next;
    }

    printf(" -> NULL\n");
}

void freeList(void)
{
    struct node *temp;

    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void)
{
    int choice, value, position, searchChoice;

    do
    {
        printf("\n----- Singly Linked List Menu -----\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at specific position\n");
        printf("4. Delete from beginning\n");
        printf("5. Delete from end\n");
        printf("6. Delete from any position\n");
        printf("7. Reverse the list\n");
        printf("8. Search a node\n");
        printf("9. Count the total number of nodes\n");
        printf("10. Display the list\n");
        printf("11. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertBeginning(value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                insertEnd(value);
                break;

            case 3:
                printf("Enter value: ");
                scanf("%d", &value);

                printf("Enter position: ");
                scanf("%d", &position);

                insertPosition(value, position);
                break;

            case 4:
                deleteBeginning();
                break;

            case 5:
                deleteEnd();
                break;

            case 6:
                printf("Enter position: ");
                scanf("%d", &position);

                deletePosition(position);
                break;

            case 7:
                reverseList();
                break;

            case 8:
                printf("1. Search by value\n");
                printf("2. Search by position\n");
                printf("Enter search choice: ");
                scanf("%d", &searchChoice);

                if (searchChoice == 1)
                {
                    printf("Enter value to search: ");
                    scanf("%d", &value);

                    searchNode(value);
                }
                else if (searchChoice == 2)
                {
                    printf("Enter position to search: ");
                    scanf("%d", &position);

                    searchPosition(position);
                }
                else
                {
                    printf("Wrong search choice.\n");
                }

                break;

            case 9:
                countNodes();
                break;

            case 10:
                displayList();
                break;

            case 11:
                printf("Program ended.\n");
                break;

            default:
                printf("Wrong choice. Please try again.\n");
        }

    } while (choice != 11);

    freeList();

    return 0;
}