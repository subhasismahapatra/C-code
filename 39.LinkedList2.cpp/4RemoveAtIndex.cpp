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
    void RemoveAtHead(){
        if(length==0)cout<<"list is empty";
        else{
            head=head->next;
            length--;
        }
    }
void removeatidx(int idx){
    if(idx<0 or idx>=length){
        cout<<"InvalidChoice";
        return ;
    }
    if(idx==0){
    RemoveAtHead();
    return;
}
    node*temp=head;
    for(int i=0;i<idx-1;i++){
        temp=temp->next;
    } 
    node*toBeDeleted=temp->next;
    temp->next=temp->next->next;
    if(idx==length-1) tail =temp;//importent
    delete toBeDeleted;
    //55 and 57 na likhete chalega
    length--;
}

};
int main(){
mylinkedlist list;
  list.insertAthead(10);
  list.insertAthead(20);
  list.insertAthead(30);
  list.display();
  cout<<endl;
  list. removeatidx(2);
  list.display();
}