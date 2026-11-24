#include <iostream>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
Node* getIntersectionNode(Node* head1, Node* head2) {
    int len1 = 0;
    Node* temp1 = head1;
    while(temp1 != NULL) {
        temp1 = temp1->next;
        len1++;
    }
    int len2 = 0;
    Node* temp2 = head2;
    while(temp2 != NULL) {
        temp2 = temp2->next;
        len2++;
    }
    temp1 = head1;
    temp2 = head2;
    if(len1 > len2) {
        for(int i = 0; i < len1 - len2; i++) {
            temp1 = temp1->next;
        }
    }
    else {
        for(int i = 0; i < len2 - len1; i++) {
            temp2 = temp2->next;
        }
    }
    while(temp1 != temp2) {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return temp1;
}
int main() {
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    Node* head2 = new Node(9);
    head2->next = new Node(8);
    Node* common = new Node(4);
    common->next = new Node(5);
    head1->next->next->next = common;
    head2->next->next = common;
    Node* ans = getIntersectionNode(head1, head2);
    if(ans != NULL)
        cout << "Intersection Node: " << ans->val;
    else
        cout << "No Intersection";
    return 0;
}