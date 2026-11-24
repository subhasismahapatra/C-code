#include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
int main(){
    vector<int> arr = {7,4,9,1,3,6,2,5}; 
    vector<int> brr = {3,4,9,1,5,7,8,5}; 
    int n = arr.size();
    int m = brr.size();
    
    int i = 0, j = 0;
    
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    
    vector<int> ans;
    
    while(i < n && j < m){
        if(arr[i] > brr[j]){
            j++;
        }
        else if(arr[i] < brr[j]){
            i++;
        }
        else {
            ans.push_back(arr[i]); 
            i++;
            j++;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
}
    return 0;
}