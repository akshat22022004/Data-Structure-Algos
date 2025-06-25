#include<iostream>
#include<vector>
using namespace std;

bool solve1(int value,int n,vector<int>&quantity){
    int count = 0;
    for(int pr : quantity){
      count += (pr + value -1)/pr;
      if(count > n)return false;   
    }
    return true;
}
int solve(vector<int>&quantity,int x){
 int low = 1;
 int high = INT_MIN;
 for(int i = 0; i<quantity.size(); i++){
    high = max(quantity[i],high);
 }
int res = high;

while(low <= high){
   
   int mid = (low + high)/2;
   if(solve1(mid,n,quantity)){
      res = mid;
      low = mid + 1;
   }
   else{
      high = mid - 1;
   }
  }
  return res;
}
int main(){
    int n;
    cin >> n;
    vector<int>quantity(n);
    for(int i = 0; i<n; i++){
        cin >> quantity[i];
    }
    int x;
    cin >> x;
    int ans = solve(quantity,x);

    cout << ans << endl;
    return 0;
}