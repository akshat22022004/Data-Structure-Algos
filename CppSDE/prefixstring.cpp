#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using  namespace std;

int solve(vector<int>&arr1,vector<int>&arr2){
    int maxlen = 0;
    unordered_map<string,int>mpp;
   for(int i = 0; i<arr1.size(); i++){
    string temp = to_string(arr1[i]);
    string prefix = "";
    for(char ch : temp){
       prefix = prefix + ch;
       mpp[prefix]++;
     }
   }
   for(int i = 0; i<arr2.size(); i++){
    string temp = to_string(arr2[i]);
    string prefix = "";
    for(char ch : temp){
        prefix = prefix + ch;
        if(mpp.find(prefix)!=mpp.end()){
            maxlen = max(maxlen,(int)prefix.size());
        }
     }
   }
   return maxlen;
}
int main(){

  int n ;
  cin >> n;
  vector<int>arr1(n);
  for(int i = 0; i<n; i++){
    cin >> arr1[i];
  }
  int m ;
  cin >> m;
  vector<int>arr2(m);
  for(int i = 0; i<m; i++){
    cin >> arr2[i];
  }
  
  int ans = solve(arr1,arr2);
  cout << ans << endl;
  return 0;
}