#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int solve(vector<int>&arr,int k){
    unordered_map<int,int>mpp;
    int count = 0;
    for(int i = 0; i<arr.size(); i++){
        int compliment = k - arr[i];
        if(mpp[compliment] > 0){
            count++;
            mpp[compliment]--;
        }
        else{
            mpp[arr[i]]++;
        }
    }
    return count;
}
int main(){

int n; 
cin >> n;
vector<int>arr(n);
for(int i = 0; i<n; i++){
    cin >> arr[i];
}
int k;
cin >> k;
int ans = solve(arr,k);

cout << "The count is : " << ans << endl;
return 0;
}