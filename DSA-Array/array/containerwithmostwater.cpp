#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>arr){
    int n = arr.size();
    int left = 0;
    int right = arr.size()-1;
    int maxarea = 0;
    while(left < right){
        int height = min(arr[left],arr[right]);
        int width = right - left;
        int currentarea = width * height;
        maxarea = max(maxarea,currentarea);

        if(arr[left] < arr[right]){
            left++;
        }
        if(arr[right] < arr[left]){
            right--;
        }
    }
    return maxarea;
}
 
int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
     }
    int ans = solve(arr);

    cout << ans << endl;

    return 0;
}