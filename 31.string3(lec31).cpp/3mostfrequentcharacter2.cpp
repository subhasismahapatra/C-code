#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string s = "success";
    vector<int> freq(26, 0);
    for (char ch : s) {
        int idx = ch - 97;
        freq[idx]++;
    }
    int maxfreq = 0;
    for (int i = 0; i < 26; i++) {
        maxfreq = max(freq[i], maxfreq);
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] == maxfreq) {
            cout << char(i + 97);
            break;
        }
    }
    return 0;
}