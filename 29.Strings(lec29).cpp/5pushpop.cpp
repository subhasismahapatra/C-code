#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="Subhasis";
    s.pop_back();//1st pop or delete a element
    s.push_back('K');//push or insert k
    cout<<s<<endl;

    sort(s.begin(),s.end());//string alphabetical order me sort ho jata hai capital letter chore ke
    cout<<s<<endl;

    reverse(s.begin(),s.end());//pura string ko reverse kar rahi hai
    cout<<s<<endl;

    reverse(s.begin()+1,s.end()-1);//samne ki ek or piche ki ek element chorke pura string reversekar rahi hai
    cout<<s<<endl;
}