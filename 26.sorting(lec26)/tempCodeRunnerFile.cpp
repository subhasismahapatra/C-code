#include<iostream>
 #include<vector>
 using namespace std;
 int main(){
    vector<int>arr={7,4,9,1,3,6,2,5};
    int n=arr.size();
    int k;
    cout<<"enter the pass:";
    cin>>  k;
    for(int i=0;i<k-1;i++){
        int min=arr[i],minIdx=i;
        for (int j = i; j <k ; i++) {
         if(arr[i]<min){
            min=arr[i];
            minIdx=i;
         }   
        }
      swap(arr[i],arr[minIdx]);
    }
for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
}
 }