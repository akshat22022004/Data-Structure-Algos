#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;
int solve(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    
    while(left <= right) {
        int mid = left + (right - left) / 2; 
        
        if(arr[mid] == target) {
            return mid; 
        } else if(arr[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
    
    return -1; 
}
int main(){
    int n;
    cin >> n;
    
    vector<int> arr(n); 
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    sort(arr.begin(), arr.end()); 
    int target;
    cin >> target; 
    int ans = solve(arr, target);
    if (ans == -1) {
        cout << "Target not found" << endl; 
    } else {
        cout << "Target found at index: " << ans << endl; 
    }
    return 0;
}

