#include <iostream>
#include <vector>
int lower_bound_binary_search(const std::vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size(); 
    while (low < high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    
    
    return low; 
}

int main() {
    std::vector<int> data = {1, 3, 5, 5, 7, 9};
    int target = 7;

    int index = lower_bound_binary_search(data, target);
    std::cout << "The lower bound index of " << target << " is: " << index << std::endl;
    
    return 0;
}

