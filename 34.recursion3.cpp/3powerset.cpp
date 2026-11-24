#include<iostream>
#include<vector>
using namespace std;
void PowerSet(int Idx,vector<int>&arr,vector<int>&brr,vector<vector<int>>&ps){
if(Idx==brr.size()){
    ps.push_back(arr);
    return;
}
PowerSet(Idx+1,arr,brr,ps);//skip
arr.push_back(brr[Idx]);
PowerSet(Idx+1,arr,brr,ps);//pick
}
int main(){
vector<int>brr={18,7,45};
vector<int>arr={};
vector<vector<int>> ps={};
PowerSet(0,arr,brr,ps);

}
