#include <iostream>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;
    int p=power(a,b/2);
   if(b%2==0){
    return p*p; //power(a,b/2)*power(a,b/2);
   }
   else if(b%2!=0) return p*p*a;//power(a,b/2)*power(a,b/2)*a;
}
int main(){
    int a,b;
    cout<<"enter the no1.:";
    cin>>a;
    cout<<"enter the no2.:";
    cin>>b;
   cout<< power(a,b);
}