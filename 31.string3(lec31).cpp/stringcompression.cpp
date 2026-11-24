#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = "ssskkkkeevvqqppeee";
    int n = s.length();
    int i = 0, j = 0, maxlen = 0;
    string ans = "";
    while (j < n) {
        if (s[j] == s[i])       
            j++;
        else {
            int len = j - i;
            if (len > maxlen)   
                maxlen = len;
            ans.push_back(s[i]);
            if (len != 1)
                ans.push_back(len + 48);
            i = j;
        }
    }
    int len = j - i;
    if (len > maxlen)           
        maxlen = len;
    ans.push_back(s[i]);
    if (len != 1)
        ans.push_back(len + 48);
    s = ans;
    cout  << ans << endl;
}