#include <iostream>
using namespace std;
void uniquepaths(int m,int n,string s){
    if(n==1||m==1){
        cout<<s<<endl;
        return;
    }
    if(n==0||m==0) return;
      if (n > 1) uniquepaths(m,n-1,s+"R");
      if (m > 1) uniquepaths(m-1,n,s+"D");
}
int main(){
int m,n;
cout<<"enter the no. of rows:";
    cin>>m;
    cout<<"enter the no. of column:";
    cin>>n;
    uniquepaths(m,n,"");
}