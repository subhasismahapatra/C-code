#include <iostream>
#include <vector>

using namespace std;


int findFirst(const vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int first = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            first = mid;       
            high = mid - 1;    
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}
int findLast(const vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int last = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            last = mid;        
            low = mid + 1;    
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}

int main() {
    vector<int> arr = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int target = 5;
    
    cout << "First Occurrence: " << findFirst(arr, target) << "\n";
    cout << "Last Occurrence: " << findLast(arr, target) << "\n";
    
    return 0;
}
