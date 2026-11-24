#include<iostream>
#include<vector>
using namespace std;
int binarysearch(int low,int high,vector<int>&arr,int target){
    if(low>high)return -1;
int mid=(high+low)/2;
if(arr[mid]==target) return mid;
else if(arr[mid>target]) return binarysearch(low,mid-1,arr,target);
else return binarysearch(mid+1,high,arr,target);
}
int main(){
int target;
cout<<"enter the terget:";
cin>>target;
vector<int>arr={26,45,48,62,66,78,95};
int n=arr.size();
int ans=binarysearch(0,n-1,arr,target);
cout << "Index: " << ans;
}