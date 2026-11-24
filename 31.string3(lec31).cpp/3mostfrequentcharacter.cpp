#include <iostream>
#include <string>
using namespace std;
int main() {
    string s= "success";
    int maxCount = 0;
    char mostFrequentChar = ' ';
    for (int i = 0; i < s.length(); i++) {
        int currentCount = 0;
        for (int j = 0; j < s.length(); j++) {
            if (s[i] == s[j]) {
                currentCount++;
            }
        }
        if (currentCount > maxCount) {
            maxCount = currentCount;
            mostFrequentChar = s[i];
        }
    }
    if (!s.empty()) {
        cout << "The most frequent character is: '" << mostFrequentChar << "'" << std::endl;
    } else {
        cout << "The string is empty." << std::endl;
    }

    return 0;
}
