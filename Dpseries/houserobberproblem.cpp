#include <iostream>
#include <vector>
using namespace std;

int solve1(vector<int>& arr, int n, vector<int>& dp) {
    if (n == 0) {
        return arr[0];
    }
    if (n < 0) {
        return 0;
    }
    if (dp[n] != -1) {
        return dp[n];
    }
    int incl = solve1(arr, n - 2, dp) + arr[n]; 
    int excl = solve1(arr, n - 1, dp); 

    dp[n] = max(incl, excl); 
    return dp[n];
}
int solve(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) {
        return 0;
    }
    vector<int> dp(n, -1); 
    return solve1(arr, n - 1, dp); 
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = solve(arr);
    cout << ans << endl;
    return 0;
}
