#include <iostream>
using namespace std;
class node{
    public:
    int val;
    node*next;
    node(int val){
        this->val=val;
    }
};
class mylinklist{
    public:
    node*head;
    node*tail;
    int length;
    mylinklist(){
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
int get(int idx){
    if(idx<0 or idx>=length){
        cout<<"InvalidChoice"<<endl;
        return -1;
    }
    node*temp=head;
    for(int i=0;i<=idx;i++){
        temp=temp->next;
    }
    return temp->val;
} 
};
int main(){
mylinklist list;
list.insertAthead(10);
  list.insertAthead(20);
  list.insertAthead(30);
  //list.display();*/
  list.get(2);
  cout<<list.get(2);
  list.display();
}