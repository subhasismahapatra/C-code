#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string s) {
    int i = 0;
    int j = s.length() - 1;
    while (i < j) {
        char x = s[i];
        char y = s[j];
        if (x >= 'A' && x <= 'Z')
            x = x + 32;
        if (y >= 'A' && y <= 'Z')
            y = y + 32;
        if (!((x >= 'a' && x <= 'z') || (x >= '0' && x <= '9'))) {
            i++;
        }
        else if (!((y >= 'a' && y <= 'z') || (y >= '0' && y <= '9'))) {
            j--;
        }
        else {
            if (x != y)
                return false;
            i++;
            j--;
        }
    }
    return true;
}
int main() {
    string s;
    getline(cin, s);
    if (isPalindrome(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}
//check output:A man, a plan, a canal, Panama
//Palindrome