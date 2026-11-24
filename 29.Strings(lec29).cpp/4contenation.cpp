#include <iostream>
#include<string>
using namespace std;
int main(){
    string s1="abc";
    string s2="xyz";
    //cout<<s1+s2<<endl;//do string eksath jur jayega
    string s3=s1+s2;
    cout<<s3<<endl;

    string s="abc";
    //string x=s+4;(gives error)
    string x=s+'4';
    cout<<x<<endl;
    string s4="subhasis";
    s4+="mahapatra";
    cout<<s4<<endl;
}