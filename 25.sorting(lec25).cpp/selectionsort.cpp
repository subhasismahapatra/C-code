#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>arr={1,8,6,9,7,4,3,5,2};
int n=arr.size();
for(int j=0;j<=n-1;j++){
int min=arr[j],minIdx=j;
for(int i=j;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
        minIdx=i;
    }
}
swap(arr[j],arr[minIdx]);
}
for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
}
}