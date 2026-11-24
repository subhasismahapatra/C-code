#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> arr={9,-2,0,0,-4,6,7,0,0,0,0};
int n=arr.size();
for(int i=0;i<n;i++){
for(int j=0;j<n-i-1;j++){
    if(arr[j]==0){
      swap(arr[j],arr[j+1]);
    }   
}
}
cout<<"swaped array";
for(int i=0;i<n;i++){
     cout << arr[i] << " ";
}
}