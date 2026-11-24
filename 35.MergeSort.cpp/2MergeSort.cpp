#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&a){
    int n=a.size();
     for(int i=0; i<n; i++)
   cout << a[i] << " ";
   cout<<endl;
}
 void merge(vector<int>&arr,vector<int>&brr,vector<int>&crr){
int i=0,j=0,k=0;
while(i<arr.size()&&j<brr.size()) {
    if(arr[i]<brr[j]) crr[k++]=arr[i++];
    else crr[k++]=brr[j++];
}   
while(i<arr.size())crr[k++]=arr[i++];
while(j<brr.size()) crr[k++]=brr[j++];
}
void mergesort(vector<int>&a){
int n=a.size();
if(n == 1)
    return;
vector<int>arr(n/2);
vector<int>brr(n-n/2);
int Idx=0;
for(int i=0;i<n/2;i++){
    arr[i]=a[Idx++];
}
for(int i=0;i<n-n/2;i++){
    brr[i]=a[Idx++];
}
mergesort(arr);
mergesort(brr);
merge(arr,brr,a);
}
int main(){
    vector<int>a={5,2,8,3,7,1,4,6};
    print(a);
    mergesort(a);
    print(a);
}