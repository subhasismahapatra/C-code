#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,3,2,1};
    int n = 8;
    int low = 0, high = n - 2;
    bool found = false;

    while (low <= high) {
        int mid = (low + high) / 2;

        
        if (arr[mid-1]<arr[mid]&&arr[mid]<arr[mid+1]) {
            low = mid + 1;
        }
        else if (arr[mid-1]>arr[mid]&&arr[mid]>arr[mid+1]) {
            high = mid - 1;
        }
        else {
            cout << "Element found at index " << mid << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Element not found" << endl;

    return 0;
}
