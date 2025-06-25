#include<iostream>
#include<vector>
using namespace std;

vector<int> solve(vector<vector<int>>& arr) {
    vector<int> ans;
    int n = arr.size();
    int m = arr[0].size();
    int left = 0;
    int right = m - 1;
    int top = 0;
    int bottom = n - 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            ans.push_back(arr[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            ans.push_back(arr[i][right]);
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(arr[bottom][i]);
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(arr[i][left]);
            }
            left++;
        }
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    vector<int> res = solve(arr);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}
