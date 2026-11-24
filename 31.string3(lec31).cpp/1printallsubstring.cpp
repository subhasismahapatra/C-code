#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s="abcd";
    int p=s.size();
    for(int i=0;i<p;i++){
      for(int j=0;j<s.size()+1-i;j++){
          string sub=s.substr(i,j);
          cout<<sub<<" ";
      }
      cout<<endl;   
    }
}