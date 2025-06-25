#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>&arr1,vector<int>&arr2){
   int i = 0;
   int j = 0;
   int count = 0;
   sort(arr1.begin(),arr1.end());
   sort(arr2.begin(),arr2.end());
   while(j < arr1.size() && i < arr2.size()){
    if(arr1[j] >= arr2[i]){
        count++;
        i++;
        j++;
    }
    else{
        j++;
     }
   }
   return count;
}
 int main(){
    int n; 
    cin >> n;
    vector<int>arr1(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int m; 
    cin >> m;
    vector<int.arr2(n);
    for(int i = 0; i<m; i++){
        cin >> arr2[i];
    }
    int ans = solve(arr1,arr2);
    cout << "The count is "  << ans << endl;

     return 0;
 }