#include <iostream>
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
void printrec(node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    printrec(head->next);
    cout<<head->val<<" ";//instead of printing before recursion we can print it after recursion also
}   //it gives output :2 8 1 0 7 
int main(){
  node* a=new node(7);//head;
  node* b=new node(0);
  node* c=new node(1);
  node* d=new node(8);
  node* e=new node(2);
  //attaching nodes
  b->next=c;
  a->next=b;
  c->next=d;
  d->next=e;
  printrec(a);
}