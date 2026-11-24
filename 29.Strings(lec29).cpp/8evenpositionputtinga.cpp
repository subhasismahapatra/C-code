#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s="Subhasis Mahapatra";
    int n=s.length();
    for(int i=0;i<n;i++){
        if(i%2!=0){
            s[i]='a';
        }
    }
    for(int i=0;i<n;i++)
    cout<<s[i]<<" ";
}