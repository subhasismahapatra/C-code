#include<iostream>
using namespace std;
void param(){
    cout<<"param"<<endl;
}
void kartik(){
    cout<<"kartik"<<endl;
    param();
}
void aryan(){
    cout<<"aryan"<<endl;
    kartik();
}
int main(){
     kartik();
    param();
    aryan();
}