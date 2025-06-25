#include<iostream>
#include<vector>
using namespace std;
int solve1(int n , vector<int>&dp){
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int ans = n;
    for(int i = 1; i*i<=n; i++){
        ans = min(ans,1+solve1(n-i*i,dp));
        dp[n]=ans;
    }
    return dp[n];
}  
int solve(int n ){
    vector<int>dp(n+1,-1);
    return solve1(n,dp);
}
int main(){
    int n;
    cin >>n;
    int resultant = solve(n);
    cout <<  resultant << endl;
    return 0;
}