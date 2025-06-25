#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int solve(vector<int>&arr){
    unordered_map<int,int>mpp;
    int n = arr.size();
    int left = 0;
    int count = 0;
    for(int i = 0; i<arr.size();i++){
        mpp[arr[i]]++;
        while(mpp.size() > 2){
            mpp[arr[left]]--;
            if(mpp[arr[left]] == 0){
                mpp.erase(arr[left]);
            } 
            left++;
        }
            
            count = max(count,i-left+1);
    }
    return count;
}
int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i<n;  i++){
        cin >> arr[i];
    }
    int ans = solve(arr);
    cout << "The count is : " << ans << endl;
    return 0;
}