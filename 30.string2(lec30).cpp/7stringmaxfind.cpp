#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*int main(){
    vector<string> arr={"0123","0023","456","00182","940","2901"};
    string max=arr[0];
   for(int i=0;i<arr.size();i++){
    if(stoi(arr[i])>stoi(max))
    max=arr[i];
   }
   cout<<max<<endl;
}*/
//------------------not using stoi and stoll---------------
string(biggerNumber)(string s1,string s2){
    int i=0;
    while(s1[i]=='0')i++;
    int s1_real_length=s1.length()-i;
    int j=0;
    while(s1[2]=='0')i++;
    int s2_real_length=s2.length()-i;
    if(s1_real_length>s2_real_length){ return s1;
    }
    if(s1_real_length<s2_real_length){ return s2;
    }
    while(i<s1.length() && s1[i]==s2[j]){
        if(s1[i]>s2[j])return s1;
        if(s1[i]<s2[j])return s2;
    }
    return s1;
}
int main(){
 vector<string> arr={"0123","0023","456","00182","940","2901"};
    string max=arr[0];
   for(int i=0;i<arr.size();i++){
    max=biggerNumber(arr[i],max);
   }
   cout<<max<<endl;
}