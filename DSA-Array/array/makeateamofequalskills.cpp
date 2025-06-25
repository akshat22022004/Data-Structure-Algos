#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long solve(vector<int>&arr){
sort(arr.begin(),arr.end());
int n = arr.size()-1;
int i = 0; 
int j = n;
long long sum = 0;
int skills = arr[i]+arr[j];
while(i<j){
    if(arr[i]+arr[j] != skills){
        return -1;
    }
    else{
        sum = sum +(arr[i]*arr[j]);
        i++;
        j--;
    }
  }
  return sum;
}
int main(){
cout << "Enter the value :" << endl;
int n;
cin >> n;
vector<int>arr(n);
for(int i = 0; i<n; i++){
    cin >> arr[i];
}
long long ans = solve(arr);
cout << "The resultant is : " << ans << endl;
return 0;
}