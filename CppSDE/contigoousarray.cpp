#include<iostream>
#include<unordered_map>
#include<cLimits>
using namespace std;
// array ka size declare krte hai saath me agar wo ek vector nhi hai to
// is baat ko hamesha yaad rakho
int solve(int arr[],int n){
  //  int n = arr.size();
    unordered_map<int,int>mpp;
    int sum = 0;
    int len = 0;
    int maxlen = 0;
    mpp[0]=-1;
    for(int i = 0; i<n; i++){
        if(arr[i]==1){
            sum = sum +1;
        }
        else{
            sum = sum-1;
        }
       if(mpp.find(sum)!=mpp.end()){
          len =  i-mpp[sum];
          maxlen = max(maxlen, len);
       }
       else{
        mpp[sum]=i;
       }
    }
    return maxlen;
}
int main(){
    int n;
    cin >> n; 
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
   int result = solve(arr,n);
 
   cout << result << endl;

   return 0;
}