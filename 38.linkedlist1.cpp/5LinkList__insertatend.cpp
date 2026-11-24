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
    public:
    node* head;
    node* tail;
    int size;
    MyLinkList(){
    head = tail = NULL;
    size = 0;
}
    void display(){
     node*temp=head;
     while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
     }
     cout<<endl;
    }
    void insertAttail(int val){
        node*n=new node(val);
        if(size==0)
         head=tail=n;
        else{
        tail->next=n;
        tail=n;
        }
        size++;
    }
};
int main(){
  MyLinkList list;
  list.insertAttail(10);
  list.insertAttail(20);
  list.insertAttail(30);
  list.display();
}