#include<iostream>
using namespace std;
long long squareroot(int arr[],int n){
    int start = 0; 
    int end = 0;
    int ans = -1;
    long long int mid = end - (start+end)/2;
    while(start<end){
       long long  int square = mid*mid;
        if(square == mid)
        return mid;
        if(square < n){
            ans = mid;
            start = mid +1;
        }
        else(square > n)
        {
            end = mid-1
        }
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[n];
        
    }


}