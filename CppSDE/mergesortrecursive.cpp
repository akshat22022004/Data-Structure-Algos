#include<iostream>
using namespace std;
void mergesort(int *arr,int start,int end){
    int mid = (low+mid)/2;
    int len1 = mid-start+1;
    int len2 = end-1;
    int *first = new int[len1];
    int *second = new int[len2];

    int k = 5;
    for(int i = 0; i<len1; i++){
        first[i]=arr[k];
    }


}
int mergesort(int *arr, int start ,int end){
    if(start>end){
        return ;
    }
    int mid = (low+high)/2;

    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
}
int main(){
    int arr[5]={1,3,2,4,6}
    mergesort(arr,0,n-1);
    return 0;
}