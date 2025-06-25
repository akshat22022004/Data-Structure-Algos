#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 int solve(vector<int>&arr,int k){
    //declare a map
    unordered_map<int,int>mpp;
    int n = arr.size();
    int count = 0;
    int left = 0;
    for(int i = 0; i<n; i++){
        //store the frequency in the map
        mpp[arr[i]]++;
         // check the condition in the while loop until the map exceeds the size of k
        while(mpp.size() > k){
            mpp[arr[left]]--;
            if(mpp[arr[left]] ==  0){
                mpp.erase(arr[left]);
            }
            left++;
        }
        count = count + (i-left +1);
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
    int ans = solve(arr,k) - solve(arr,k-1);
    cout << "The count is " << ans << endl;

    return 0;
 }