#include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 void sort (int n, vector<int>&arr) { 
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    
}

 int main(){
    vector<int>arr={7,4,9,1,3,6,2,5};
    vector<int>brr={3,4,9,1,5,6,8,5};
    int n=arr.size();
    int m=brr.size();
    int result[100];
    int k = 0;
    sort(n,arr);
    sort(m,brr);
    int i=0,j=0;
while(i<n&&j<m){
if(arr[i]>brr[j]){
    j++;
}else if(arr[i]<brr[j]){
    i++;
}else {
    result[k] = arr[i];
            k++;

    i++;j++;
}
}cout << "Common elements: ";

    for (int x = 0; x < k; x++) {
        cout << result[x] << " ";
    }

 }
   