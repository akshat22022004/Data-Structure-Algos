#include<iostream>
#include<vector>
using namespace std;

int solve1(vector<int> &days, vector<int> &costs, int index, vector<int> &dp, int n) {
    if (index >= n) {
        return 0;
    }
    // agar dp ke index pe value -1 nhi hai to us value ko return kr do
    if (dp[index] != -1) {
        return dp[index];
    }
    //pehla case : jab 1 ticket le rha hai tab bus us cost ko add kro aaur ek index aage bad jao
    int option1 = costs[0] + solve1(days, costs, index + 1, dp, n);
    //dusra case: agar wo 7 din ka lega to loop chalo do then ab is loop me condition laGA do ki days ke jis 
    //index pe kahde ho usse 7 din aage tak ke liye .
    int i = index;
    while (i < n && days[i] < days[index] + 7) {
        i++;
    }
    int option2 = costs[1] + solve1(days, costs, i, dp, n);
    i = index;
    while (i < n && days[i] < days[index] + 30) {
        i++;
    }
    //teesra case : jo option 2 me kiya wo hi same cheez yha pe 30 dinke liye kar do
    int option3 = costs[2] + solve1(days, costs, i, dp, n);
    dp[index] = min(option1, min(option2, option3));
    return dp[index];
}
int solve(vector<int> &days, vector<int> &costs) {
    int n = days.size();
    //dp vector bna liya exponential calls store krne ke liye
    vector<int> dp(n, -1);
    return solve1(days, costs, 0, dp, n);
}
int main() {
    int n;
    cin >> n;
    vector<int> days(n);
    for (int i = 0; i < n; i++) {
        cin >> days[i];
    }
    int m = 3; 
    vector<int> costs(m);
    for (int i = 0; i < m; i++) {
        cin >> costs[i];
    }
    cout << solve(days, costs) << endl;
    return 0;
}
