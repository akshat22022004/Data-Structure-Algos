#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>& nums1, vector<int>& nums2, int m, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--]; 
        } else {
            nums1[k--] = nums2[j--]; 
        }
    }

    while (j >= 0) {
        nums1[k--] = nums2[j--]; 
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> arr1(n + 10); 
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    vector<int> arr2(m); 
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    solve(arr1, arr2, n, m);
    for (int i = 0; i < n + m; i++) {
        cout << arr1[i] << " ";
    }
    return 0;
}


