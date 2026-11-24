#include<iostream>
using namespace std;
class Node{
public:
int val;
Node*next;
Node(int val){
this->val=val;
}
};
class Solution {                                           
public:
    Node* middleNode(Node* head) {
       int len=0;
       Node*temp=head;
       while(temp!=0){
        temp=temp->next;
        len++;
       } 
       temp=head;
       for(int i=1;i<=len/2;i++){
        temp=temp->next;
       }
       return temp;
    }
};
// int main(){
// Solution  list;
// }
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//        ListNode*slow=head;
//         ListNode*fast=head;
//         while(fast!=NULL && fast->next!=NULL){
//            slow=slow->next;
//            fast=fast->next->next;
//         }
//         return slow;
//     }
// };