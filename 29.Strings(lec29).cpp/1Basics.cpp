#include<iostream>
#include<string>
using namespace std;
int main(){
 //output part
    string x="Subhasis mahpatra";//space auto matatic leta hai
    cout<<"agar me kuchvi likhu idha e vi ek sting hai"<<endl;
    cout<<x<<endl;
 //input part
    /*string s;
    cin>>s;           //mai agar e input du to out put e ayega subhasis mahapatra
      cout<<s;*/    // output:subhasis
//solve
    string s;
    //cin>>s;
    getline(cin,s);
    cout<<s;
}