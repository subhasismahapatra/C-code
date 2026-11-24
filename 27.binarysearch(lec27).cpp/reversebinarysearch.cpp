#include <iostream>
using namespace std;

int main() {
    int arr[] = {70, 60, 50, 40, 30, 20, 10};
    int n = 7;
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
        else if (arr[mid] > key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found)
        cout << "Element not found" << endl;

    return 0;
}