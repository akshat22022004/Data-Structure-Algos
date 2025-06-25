#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

vector<vector<int>> solve(vector<int>& arr) {
    vector<vector<int>> res;
    sort(arr.begin(), arr.end()); 
    int n = arr.size(); 
    for (int i = 0; i < n; i++) {
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0) {
                j++;
            } else if (sum > 0) {
                k--;
            } else {
                res.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
                while (j < k && arr[j] == arr[j - 1]) j++;
                while (j < k && arr[k] == arr[k + 1]) k--;
            }
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<vector<int>> ans = solve(arr);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < 3; j++) { 
            cout << ans[i][j] << " ";
        }
        cout << endl; 
    }
    return 0;
}
