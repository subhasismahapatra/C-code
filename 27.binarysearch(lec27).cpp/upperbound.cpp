#include <iostream>
#include <vector>
int customUpperBound(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    int ans = arr.size(); 

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] > target) {
            ans = mid; 
            high = mid - 1;
        } else {
            low = mid + 1; 
        }
    }
    return ans;
}

int main() {
    std::vector<int> arr = {1, 3, 5, 5, 7, 9};
    int target = 5;

    int index = customUpperBound(arr, target);

    std::cout << "The upper bound of " << target << " is at index: " << index << "\n";
    if (index < arr.size()) {
        std::cout << "The value at this index is: " << arr[index] << "\n";
    }

    return 0;
}
