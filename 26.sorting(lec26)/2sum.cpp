#include<iostream>
 #include<vector>
 using namespace std;
 int main(){
    vector<int>arr={6,8,14,19,23,31,34};
    int n=arr.size();
    int tar=27;
    int i=0,j=n-1;
    while(i<j){
    if((arr[i]+arr[j])>tar){
        j--;}
    else if((arr[i]+arr[j])<tar){
        i++;}
    else{   
    cout << (i + 1) << " " << (j + 1) << endl;
    return 0; 
        }
    }
    
    cout << "No pair found" << endl;
    return 0;
}