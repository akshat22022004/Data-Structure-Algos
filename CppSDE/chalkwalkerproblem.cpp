#include<iostream>
using namespace std;
int solve(int arr[], int k,int n){
 //int n = arr.size();
 int sum = 0;
 for(int i = 0; i<n; i++){
    sum = sum +arr[i];
 }
 k = k%sum;
 for(int i = 0; i<n; i++){
    if(arr[i]>k){
        return i;
    }
    else{
        k = k-arr[i];
    }
  }
  return 0;
}
int main(){

int n;
cin >> n; 
int arr[n];
for(int i = 0; i<n; i++){
    cin >> arr[i];
}
int k;
cin >> k;
int res = solve(arr,k,n);
cout << res << endl;
return 0;
}