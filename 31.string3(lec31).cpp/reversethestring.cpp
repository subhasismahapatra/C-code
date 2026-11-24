#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = "subhasis mahapatra";
    int i = 0;
    int j = s.length() - 1;
    while (i < j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    cout << s << endl;
}