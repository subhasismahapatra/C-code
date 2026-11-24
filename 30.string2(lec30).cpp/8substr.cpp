//string ki continuous part ko print karne ke liye
//substring means subset nahi hota
//substr(idx,length)
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s="bhavya";
    string sub=s.substr(0,3);//0 se start 2nd length tak
    cout<<sub<<endl;
    cout<<s.substr(2)<<endl;//2 se start to end tak
    string x="srilakshmi";
    int n=x.length();
    cout<<x.substr(n/2,n/2)<<endl;
}