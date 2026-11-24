#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={4,1,7,3,9,2,0,8};
    int n=arr.size();
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0&&arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
}
}









