#include<iostream>
using namespace std;
int pivotelement(int arr[],int n ){
    int start = 0;
    int end = n-1;
    while(start<end){
         int mid = (start+end)/2;
        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        else {
            end = mid;
        }
       //  mid = (start+end)/2;
    }
    return start;
}
int main(){
    int arr[6] = { 3,8,10,17,1,2};

    cout << "the pivot element is:"<< pivotelement(arr,6) << endl;

    return 0;


}