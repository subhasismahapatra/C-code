#include <iostream>
using namespace std;
int stairs(int n){
    if(n<=2)return n;
    return stairs(n-1)+stairs(n-2);
}
int main(){
int n;
    cout<<"enter the no.:";
    cin>>n;
    cout<<stairs(n);
}