#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s ="Subhasis Mahapatra";
    int n=s.size();
   /* for(int i=0;i<n;i++){
        cout<<s[i];
    }*/
   for(char ch:s){
    cout<<ch;
   }
}