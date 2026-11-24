#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s="subhasis mahapatra";
    cout<<s[1]<<endl;
    s[0]='c',s[1]='h';
    cout<<s<<endl;
//size ke liye
cout<<s.size()<<endl;
cout<<s.length()<<endl;                //size or length same hai

}