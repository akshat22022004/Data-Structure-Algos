#include<bits/stdc++.h>
using namespace std;
int solve(string &s){
    int n = s.size();
    int count = 0;
    unordered_map<char,int>mpp;
    int left = 0;
    for(int i = 0; i<s.size(); i++){
        mpp[s[i]]++;
        while(mpp['a'] > 0 && mpp['b'] > 0 && mpp['c'] > 0){
         count += n - i;
         mpp[s[left]]--;
         left++;
        }
    }
    return count;
}

int main(){
    string s ;
    cin >> s;
    int ans = solve(s);
    cout << ans << endl;
    return 0;

}