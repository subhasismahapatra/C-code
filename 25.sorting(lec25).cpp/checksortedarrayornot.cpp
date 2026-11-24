#include <iostream> 
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); 
    bool is_sorted = true; 
    for(int i = 0; i <= n - 2; i++) {
        if(arr[i] > arr[i+1]) {
            is_sorted = false; 
            break;             
        }
    }

    
    if(is_sorted) {
        cout << "True" << endl; 
    } else {
        cout << "False" << endl;
    }

    return 0; 
}
