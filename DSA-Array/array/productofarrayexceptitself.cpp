#include<iostream>
#include<vector>
using namespace std;
vector<int>solve(vector<int>&arr){
    int n = arr.size();
    vector<int>res(n,1);
    int leftproduct = 1;
    int rightproduct = 1;
    for(int i = 0; i<arr.size(); i++){
        res[i] = leftproduct;
        leftproduct = leftproduct * arr[i];
    }
     for(int i = arr.size()-1; i>=0; i--){
        res[i] = res[i]* rightproduct;
        rightproduct = rightproduct * arr[i];
    }

    return res;
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