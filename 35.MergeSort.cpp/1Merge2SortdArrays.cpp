#include<iostream>
#include<vector>
using namespace std;
 void merge(vector<int>&arr,vector<int>&brr,vector<int>&crr){
int i=0,j=0,k=0;
while(i<arr.size()&&j<brr.size()) {
    if(arr[i]<brr[j]) crr[k++]=arr[i++];
    else crr[k++]=brr[j++];
}   
while(i<arr.size())crr[k++]=arr[i++];
while(j<brr.size()) crr[k++]=brr[j++];
}
int main(){
    vector<int>arr={2,3,6,8};
    vector<int>brr={1,4,5,7,9,10};
    int m=arr.size(),n=brr.size();
    vector<int>crr(m+n);
    merge(arr,brr,crr);
    for(int i=0; i<(m+n); i++)
    cout << crr[i] << " ";

}