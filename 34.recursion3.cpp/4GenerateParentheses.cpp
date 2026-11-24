#include<iostream>
#include<vector>
using namespace std;
void generate(string s,int open,int close,int n,vector<string>& ans){
    if(close==n){
        ans.push_back(s);
        return;
    }
    if(open<n) generate(s+"(",open+1,close,n,ans);
    if(close<open) generate(s+")",open,close+1,n,ans);
}
int main(){
    int n;
    cin>>n;
    vector<string> ans;
    generate("",0,0,n,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}