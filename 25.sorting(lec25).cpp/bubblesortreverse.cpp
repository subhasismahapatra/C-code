 #include<iostream>
 #include <vector>
 using namespace std;
 int main(){
    vector<int> arr={9,-2,-4,6,7};
    int n= arr.size();
    int totalswaps=0;
    for(int  j=0;j<n-1;j++){
      int swaps=0;
    for(int i=0;i<n-1-j;i++){//n-j-1 karan loop er iteration kan karar janna
      if(arr[i+1]>arr[i]){
      swap(arr[i+1],arr[i]);
      swaps++;
      totalswaps++;
      } 
    }
    if(swaps==0)//best case dekhar janna
    break;
   }
   cout << "Sorted array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
   cout<<endl<<totalswaps;
    return 0;
}  
    
 