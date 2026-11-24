#include <iostream>
#include<string>
using namespace std;
int main(){
    string s1="abc";
    string s2="xyz";
    if(s1==s2)cout<<"same"<<endl;//iske allaba hum aur bhi 5 different operator use kar sakte hai
    else cout<<"not same"<<endl;

    if(s1>s2)cout<<s1<<"is gteater then"<<s2<<endl;
    else cout<<s2<<"is gteater then"<<s1<<endl;
    //greater or less than ascii value ke upar depent karti hai,
    //pahele value ka ascii value agar second se ja da ho to pahala barda ho ga.
}



