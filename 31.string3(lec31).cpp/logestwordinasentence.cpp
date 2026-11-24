//jumping 2 ptr technique(variable size sliding window)
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = "subhasis is a coder";
    int n = s.length();
    int i = 0, j = 0, maxlen = 0;
    string ans="";
    while (j < n) {
        if (s[j] != ' ')
            j++;
        else {
            int len = j - i;   
            if (len > maxlen) {maxlen = len;
            ans=s.substr(i,len);
            }
            i = j;
            while (i < n && s[i] == ' ') {
                i++;
                j++;
            }}}
    int len = j - i;
    if (len > maxlen)
        maxlen = len;
    cout << maxlen <<" "<<ans<< endl;
}