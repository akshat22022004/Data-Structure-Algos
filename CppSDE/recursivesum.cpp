#include<iostream>
using namespace std;
 int arrsum(int arr[], int size){
    //base case
    if(size == 0)
    return 0 ;
     if(size == 1)
     return arr[0];
//recursive relation
 return arr[0]+arrsum(arr+1,size-1);
   
 }
int main(){
     int arr[5] = { 3,2,5,1,6};
    int size = 5;
    int ans =  arrsum(arr,size);
    cout << ans << endl;
    return 0 ;
}