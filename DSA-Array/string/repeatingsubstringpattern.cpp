#include<iostream>
#include<vector>
using namespace std;

bool solve(string s){
    int n = s.length();
    int i = 0;
    int j = 1;
    vector<int>lps(n,0);
    while (j < n){
        if(s[i]  == s[j]){
            i++;
            lps[j] = i;
            j++;
        }
        else{
            if(i != 0){
                i = lps[i-1];
            }
            else{
                lps[j] = 0;
                j++;
            }
        }
    }
    int len = lps[n-1];
    return (len > 0 && n % (n-len) == 0);
}
int main(){
    string s;
    cin >> s;
    bool ans = solve(s);

    cout << "The output is " << ans << endl;
    return 0;
}