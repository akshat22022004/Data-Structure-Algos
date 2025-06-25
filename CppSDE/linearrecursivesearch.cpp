#include<iostream>
using namespace std;
int elementfound(int arr[], int size, int key){
    if(size == 0)
    return false;
   
   if(arr[0]==key){
    return true;
   }
   else {
    return elementfound(arr+1,size-1,key);
   }
}
int main(){
    int arr[5]= { 1,2,3,4,5};
    int key = 2;
    int size = 5;
    int ans = elementfound(arr,size,key);
    cout << ans << endl;
    return 0;
}