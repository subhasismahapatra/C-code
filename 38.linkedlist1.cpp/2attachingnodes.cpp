#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node*next;
    node(int val){
        this->val=val;
        next=NULL;
    }
};
int main(){
  node* a=new node(7);//head;
  cout<<a->val<<endl;
  node* b=new node(0);
  node* c=new node(1);
  node* d=new node(8);
  node* e=new node(2);
  //attaching nodes
  a->next=b;
  b->next=c;
  c->next=d;
  d->next=e;
  
  cout<<a->val<<endl;
  cout<<a->next->val<<endl;
  cout<<a->next->next->val<<endl;
  cout<<a->next->next->next->val<<endl;
  cout<<a->next->next->next->next->val<<endl;
}