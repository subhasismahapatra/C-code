#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev,*next;
};
struct node *head=NULL;
struct node* createNode(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newnode->data=data;
    newnode->prev=NULL;
    newnode->next=NULL;
    return newnode;
}
void create(){
    int n,data,i;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter data: ");
        scanf("%d",&data);
        struct node *newnode=createNode(data);
        if(head==NULL){
            head=newnode;
        }
        else{
            struct node *temp=head;
            while(temp->next!=NULL)
                temp=temp->next;
            temp->next=newnode;
            newnode->prev=temp;
        }
    }
}
void insertBeginning(){
    int data;
    printf("Enter data: ");
    scanf("%d",&data);
    struct node *newnode=createNode(data);
    newnode->next=head;
    if(head!=NULL)
        head->prev=newnode;
    head=newnode;
    printf("Node inserted successfully.\n");
}
void insertEnd(){
    int data;
    printf("Enter data: ");
    scanf("%d",&data);
    struct node *newnode=createNode(data);
    if(head==NULL){
        head=newnode;
    }
    else{
        struct node *temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=newnode;
        newnode->prev=temp;
    }
    printf("Node inserted successfully.\n");
}
void insertPosition(){
    int data,pos,i;
    printf("Enter position: ");
    scanf("%d",&pos);
    if(pos<1){
        printf("Invalid position.\n");
        return;
    }
    if(pos==1){
        insertBeginning();
        return;
    }
    struct node *temp=head;
    for(i=1;i<pos-1 && temp!=NULL;i++)
        temp=temp->next;
    if(temp==NULL){
        printf("Invalid position.\n");
        return;
    }
    printf("Enter data: ");
    scanf("%d",&data);
    struct node *newnode=createNode(data);
    newnode->next=temp->next;
    newnode->prev=temp;
    if(temp->next!=NULL)
        temp->next->prev=newnode;
    temp->next=newnode;
    printf("Node inserted successfully.\n");
}
void deleteBeginning(){
    if(head==NULL){
        printf("List is empty.\n");
        return;
    }
    struct node *temp=head;
    head=head->next;
    if(head!=NULL)
        head->prev=NULL;
    free(temp);
    printf("Node deleted successfully.\n");
}
void deleteEnd(){
    if(head==NULL){
        printf("List is empty.\n");
        return;
    }
    struct node *temp=head;
    if(temp->next==NULL){
        head=NULL;
    }
    else{
        while(temp->next!=NULL)
            temp=temp->next;

        temp->prev->next=NULL;
    }
    free(temp);
    printf("Node deleted successfully.\n");
}
void deletePosition(){
    int pos,i;
    printf("Enter position: ");
    scanf("%d",&pos);

    if(pos<1 || head==NULL){
        printf("Invalid position or empty list.\n");
        return;
    }
    if(pos==1){
        deleteBeginning();
        return;
    }
    struct node *temp=head;
    for(i=1;i<pos && temp!=NULL;i++)
        temp=temp->next;
    if(temp==NULL){
        printf("Invalid position.\n");
        return;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
        temp->next->prev=temp->prev;
    free(temp);
    printf("Node deleted successfully.\n");
}
void countNodes(){
    int count=0;
    struct node *temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    printf("Total number of nodes = %d\n",count);
}
void searchNode(){
    int key,pos=1,found=0;
    printf("Enter element to search: ");
    scanf("%d",&key);
    struct node *temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            printf("Element found at position %d\n",pos);
            found=1;
            break;
        }
        temp=temp->next;
        pos++;
    }
    if(!found)
        printf("Element not found.\n");
}
void reverseList(){
    struct node *current=head,*temp=NULL;
    while(current!=NULL){
        temp=current->prev;
        current->prev=current->next;
        current->next=temp;
        current=current->prev;
    }
    if(temp!=NULL)
        head=temp->prev;
    printf("List reversed successfully.\n");
}
void display(){
    if(head==NULL){
        printf("List is empty.\n");
        return;
    }
    struct node *temp=head;
    printf("NULL <-> ");
    while(temp!=NULL){
        printf("%d <-> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main(){
    int choice;
    create();
    do{
        printf("\n----- DOUBLY LINKED LIST MENU -----\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Any Position\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete from Any Position\n");
        printf("7. Count Total Nodes\n");
        printf("8. Search an Element\n");
        printf("9. Reverse the List\n");
        printf("10. Display the List\n");
        printf("11. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                insertBeginning();
                break;
            case 2:
                insertEnd();
                break;
            case 3:
                insertPosition();
                break;
            case 4:
                deleteBeginning();
                break;
            case 5:
                deleteEnd();
                break;
            case 6:
                deletePosition();
                break;
            case 7:
                countNodes();
                break;
            case 8:
                searchNode();
                break;
            case 9:
                reverseList();
            case 10:
                display();
                break;
            case 11:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    }while(choice!=11);
    while(head!=NULL)
        deleteBeginning();
    return 0;
}
