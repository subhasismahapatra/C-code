#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 30, 40, 50, 60, 70};
    int n = 6;
    int target;

    cout << "Enter element to search: ";
    cin >> target;

    int low = 0;
        int high = n - 1;
        
        while (low <= high) {
            
            int mid = low + (high - low) / 2; 
            
            if (arr[mid] == target) {
                return mid; 
            } else if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1; 
            }
        }
        cout<<low;
        return low;
        
    }
