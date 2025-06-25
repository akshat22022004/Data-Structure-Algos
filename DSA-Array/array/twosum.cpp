#include<iostream>
#include<vector>
using namespace std;
vector<int>solve(vector<int>&arr,int k){
    unordered_map<int,int>mpp;
    for(int i = 0; i<arr.size(); i++){
        int target = k - arr[i];
        if(mpp.find(target)!=mpp.end()){
            return {mpp[target],i};
        }
        mpp[arr[i]] = i;
    }
    return {};
}
int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    vector<int>ans = solve(arr);
    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }
    return 0;
}