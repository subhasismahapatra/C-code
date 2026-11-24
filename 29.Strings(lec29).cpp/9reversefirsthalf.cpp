#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    string s="subhasis";
    int n=s.length();
    for(int i=0;i<(n/2)-1;i++){
    reverse(s.begin() , s.end()- n / 2);
    }
     for(int i=0;i<n;i++)
    cout<<s[i]<<" ";
}
