#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node*next;
    node(int val){
        this->val=val;
    }
};
class MyLinkList{
    private:
    node* head;
    node* tail;
    int size;
    public:
    //constructor
    MyLinkList(){
    head = tail = NULL;
    size = 0;
}  
 //display function
    void display(){
     node*temp=head;
     while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
     }
     cout<<endl;
    }
    //remove at end ka function
    void RemoveAtHead(){
        if(size==0)cout<<"list is empty";
        else{
            head=head->next;
             size--;
        }
    }
    //insert at head funtion
    void insertAthead(int val){
        node*n=new node(val);
        if(size==0) head=tail=n;
        else{
        n->next=head;
        head=n;
        }
        size++;
    }
    //size ka
    int size(){
        return size;
    }
};
int main(){
  MyLinkList list;
  list.insertAthead(10);
  list.insertAthead(20);
  list.insertAthead(30);
  list.display();
  list.RemoveAtHead();
  list.RemoveAtHead();
  list.display();
  list.insertAthead(40);
   list.display();
   cout<<list.size()<<endl;
   //list.size()=0;
   //list.head=NULL;
   cout<<list.size()<<endl;
}