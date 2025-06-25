#include<iostream>
using namespace std;

int peakelement(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int mid;
    
    while(start < end){
        mid = (start + end) / 2;
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else {
            end = mid;
        }
    }
    return start;
}

int main(){
    int arr[4]= {3, 4, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int peak = peakelement(arr, size);
    cout << "The peak element is at index: " << peak << endl;
    return 0;
}
