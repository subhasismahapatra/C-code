#include <iostream>
using namespace std;
int main() {
    int arr[] = {8,9,10,1,2,3,4,5,6,7};
    int n = 12;
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    int low = 0, high = n - 1;
    bool found = false;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            cout << "Element found at index " << mid << endl;
            found = true;
            break;
        }
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= key && key <= arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else {
            if (arr[mid] <= key && key <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    if (!found)
        cout << "Element not found" << endl;
    return 0;
}