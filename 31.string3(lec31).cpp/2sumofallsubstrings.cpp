#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s="1234";
    int p=s.size();
    int total=0;
    for(int i=0;i<p;i++){
      for(int j=1;j<s.size()+1-i;j++){
          string sub=s.substr(i,j);
          
            int n=stoi(sub);
          total +=(n);
      }
      
      cout << "Total Sum: " << total << endl; 
      cout<<endl;   
    }
}