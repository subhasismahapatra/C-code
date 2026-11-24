#include <iostream>
using namespace std;

/*int main() {
   long long x = 2164646;
   
    for (long long i = 0; i <= x; i++) {
        if (i * i == x)//if(i=x/i)
            return i;

        if (i * i > x)//i>x/i {
            cout << i - 1;
            return 0;
        }
    }

    return 0;
}*/
  #include <iostream>
using namespace std;

int main() {
    int key = 7;

    int low = 0, high = key;
    int ans = 0;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (mid * mid == key) {    //same problem show in this problem like first one for the very big value.............
            ans = mid;
            break;
        }

        else if (mid * mid < key) {
            ans = mid;          
            low = mid + 1;      
        }

        else {
            high = mid - 1;    
        }
    }

    cout << "The sqrt of key: " << ans << endl;

    return 0;
}//t.c=o(n)
