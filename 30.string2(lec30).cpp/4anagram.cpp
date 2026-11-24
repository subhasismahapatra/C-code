//anagram:yeh o word hote jis or ek word banaya ja sakta hai.ex:eat-tea.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter a word:"<<endl;
     getline(cin,s);
    string p;
    cout<<"enter a word:"<<endl;
     getline(cin,p);
    sort(s.begin(),s.end());
    sort(p.begin(),p.end());
    if(s==p)cout<<"anagram";
    else cout<<"non anagram";
}