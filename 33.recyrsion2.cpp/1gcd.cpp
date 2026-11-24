#include <iostream>
using namespace std;
/*int gcd(int a,int b){
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0&&b%i==0) return i;
    }
    return 1;
}*/
int gcd(int a,int b){
    if(a==0)return b;
    return gcd (b%a,a);
}
int main(){
    int a,b;
    cout<<"enter the no1.:";
    cin>>a;
    cout<<"enter the no2.:";
    cin>>b;
   cout<< gcd(a,b);
}