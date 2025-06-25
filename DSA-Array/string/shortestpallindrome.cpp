#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void solve(string &res, vector<int>& lps) {
    int i = 0;
    int j = 1;
    while (j < res.length()) { 
        if (res[i] == res[j]) {
            i++;
            lps[j] = i;
            j++;
        } else {
            if (i == 0) {
                lps[j] = 0;
                j++;
            } else {
                i = lps[i - 1];
            }
        }
    }
}
string shortestPalindrome(string s) {
    string temp = s;
    reverse(temp.begin(), temp.end());
    string res = s + '#' + temp;
    
    vector<int> lps(res.length(), 0);
    solve(res, lps);
    int len = lps[res.length() - 1]; 
    string ans = s.substr(len); 
    
    reverse(ans.begin(), ans.end());
    return ans + s;
}

int main() {
    string s;
    cin >> s;
    string ans = shortestPalindrome(s);
    cout << "The answer is: " << ans << endl;
    return 0;
}
