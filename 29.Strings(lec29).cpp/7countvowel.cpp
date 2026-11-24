#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s="Subhasis Mhapatra";
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++){
       /*if(s[i]=='a')count++;
        if(s[i]=='e')count++;
        if(s[i]=='i')count++;
        if(s[i]=='o')count++;
        if(s[i]=='u')count++;
        if(s[i]=='A')count++;
        if(s[i]=='E')count++;
        if(s[i]=='I')count++;
        if(s[i]=='O')count++;
        if(s[i]=='U')count++;*/
        if(s[i]>=65 and s[i]<=90)s[i]+=32;
        if(s[i]=='a')count++;
        if(s[i]=='e')count++;
        if(s[i]=='i')count++;
        if(s[i]=='o')count++;
        if(s[i]=='u')count++;
       
    }
    cout<<"total vowel is:"<<count<<endl;
}