#include<iostream>
#include<vector>
using namespace std;
void printRec(vector<int>&arr,int idx){
        if(idx==arr.size()) return;
    cout<<arr[idx]<<" ";
    printRec(arr,idx+1);
    // cout<<arr[idx]<<" ";(output:-8521,235,8,5342,8,5)
}
int main(){
    vector<int> arr={5,8,2,534,8,235,-8521};
    printRec(arr,0);
}