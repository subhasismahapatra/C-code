#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr = {5,5,6,6,7,8,8,9,9,10,10,11,11};
    int n = arr.size();
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (mid == 0 && arr[mid] != arr[mid + 1]) {
            cout << "Element found at index " << mid << endl;
            return 0;}
        if (mid == n - 1 && arr[mid] != arr[mid - 1]) {
            cout << "Element found at index " << mid << endl;
            return 0;}
        if (arr[mid] != arr[mid + 1] &&
            arr[mid] != arr[mid - 1]) {
            cout << "Element found at index " << mid << endl;
            return 0;
        }
        int f = mid;
        int s = mid;
        if (arr[mid] == arr[mid - 1])
            f = mid - 1;
        else
            s = mid + 1;
        if ((f - low) % 2 == 1) {
            high = f - 1;
        }
        else {
            low = s + 1;
        }
    }

}