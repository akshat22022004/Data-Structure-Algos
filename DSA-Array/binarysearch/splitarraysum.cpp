#include<iostream>
#include<vector>
using namespace std;
bool ispossible(int mid,vector<int>nums,int k){
    int count = 1;
    int pages = 0;
    int n = nums.size();
    for(int i = 0; i<n; i++){
        if(nums[i] > mid){
            return false;
        }
        if(nums[i]+ pages <= mid){
            pages = pages + nums[i];
        }
        else{
            count = count + 1;
            pages = nums[i];
            if(count > k){
                return false;
            }
        }
    }
    return true;
}
int splitsum(vector<int>&nums,int k){
    int n = nums.size();
    int ans = 0;
    int maxval = 0;
    int sum = 0;
    for(int i = 0; i<nums.size(); i++){
        sum = sum + nums[i];
        maxval = max(maxval,nums[i]);
    }
    int start = maxval;
    int end   = sum;

    while(start <= end){
        int mid = (start + end)/2;
        if(ispossible(mid,nums,k)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}
int main(){
int m;
cin >> m;
vector<int>nums(m);
for(int i = 0; i<m; i++){
    cin >> nums[i];
}
int k; 
cin >> k;
 int ans = splitsum(nums,k);
 cout << "The answer is" << ans << endl;

 return 0;
}