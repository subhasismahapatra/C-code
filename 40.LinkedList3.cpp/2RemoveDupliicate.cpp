#include<iostream>
using namespace std;
class Node{
public:
int val;
Node*next;
Node(int val){
this->val=val;
this->next=NULL;
}
};
Node*deleteDuplicates(Node*head){
Node*i=head;
Node*j=head;
while(j!=NULL){
if(i->val==j->val)j=j->next;
else{
i->next=j;
i=j;
}
}
if(i!=NULL)i->next=NULL;
return head;
}
void display(Node*head){
while(head!=NULL){
cout<<head->val<<" ";
head=head->next;
}
}
int main(){
Node*head=new Node(1);
head->next=new Node(1);
head->next->next=new Node(2);
head->next->next->next=new Node(3);
head->next->next->next->next=new Node(3);
head=deleteDuplicates(head);
display(head);
return 0;
}
