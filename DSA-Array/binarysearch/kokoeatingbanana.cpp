#include<iostream>
#include<vector>
using namespace std;

long long solve1(vector<int>&piles,int k){
    long long sum = 0;
    for(int i = 0; i<piles.size(); i++){
        sum = sum + (piles[i]+k-1)/k;
    }
    return sum;

}
int solve(vector<int>&piles,int k){
    int n = piles.size();
    int low = 0;
    int high = 0;
    for(int i = 0; i<piles.size(); i++){
        high = max(high,piles[i]);
    }
    int mid = 0;
    while(low <= high){
        mid = (low+high)/2;
        long long hours = solve1(piles,mid);
        if(hours < k){
            low = mid + 1;
        }
        if(hours > k){
            high = mid - 1;
        }
    }
    return low;
}
int main(){
    int n; 
    cin >> n;
    vector<int>piles(n);
    for(int i = 0; i<n; i++){
        cin >> piles[i];
    }
    int k;
    cin >> k;
    int ans = solve(piles,k);
    
    cout << ans << endl;
    return 0;
 }