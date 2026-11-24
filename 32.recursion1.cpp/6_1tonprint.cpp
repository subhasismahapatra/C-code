#include <iostream>
using namespace std;
/* int n;
void print(int x){
    if(x>n) return;
    cout<<x<<" ";
    print(x+1);
}
int main(){
    cout<<"enter the no.:";
    cin>>n;
    print(1);
}*/
//Global Variable nahi karna hai to 2 parameter use karna hai...............
void print(int x,int n){
    if(x>n) return;
    cout<<x<<" ";
    print(x+1,n);
}
int main(){
    int n;
    cout<<"enter the no.:";
    cin>>n;
    print(1,n);
}