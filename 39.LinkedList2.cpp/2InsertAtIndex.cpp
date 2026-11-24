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
class mylinkedlist{
public:
node*head;
node*tail;
int length;
mylinkedlist(){
    head=tail=NULL;
    length=0;
}
void display(){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void insertAthead(int val){
        node*n=new node(val);
        if(length==0) head=tail=n;
        else{
        n->next=head;
        head=n;
        }
        length++;
    }
    
void insertatindex(int idx,int val){
    if(idx<0 or idx>length){
        cout<<"InvalidChoice"<<endl;
        return;
    }
    if(idx==0){
         insertAthead(val);
         return;
    } 

   node*n=new node(val);
   node*temp=head;
   for(int i=1;i<=idx-1;i++){
    temp=temp->next;
}
    n->next=temp->next;
    temp->next=n;
   length++;
}
};
int main(){
mylinkedlist list;
  list.insertAthead(10);
  list.insertAthead(20);
  list.insertAthead(30);
  list.display();
  cout<<endl;
  list.insertatindex(-1,90);
  list.display();
}