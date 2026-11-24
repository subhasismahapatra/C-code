#include <iostream>
using namespace std;
void deeksha(int n){
    if (n==0)return;
    cout<<"deeksha"<<endl;
    deeksha(n-1);
}
int main(){
deeksha(3);
}
//3 bar deesha print hoga
//function call it self....
/*
void deeksha(int n){
 cout<<"deeksha"<<endl;
    if (n==0)return;
    deeksha(n-1);
}
int main(){
deeksha(3);
}
output 4bar deeksha print hoga...
*/