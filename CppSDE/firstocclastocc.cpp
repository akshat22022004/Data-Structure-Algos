#include<iostream>
using namespace std;

int firstocc(int arr[], int start, int end, int key) {
    if (start > end) {
        return -1;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid] == key) {
        if (mid == 0 || arr[mid - 1] != key) {
            return mid;
        } else {
            return firstocc(arr, start, mid - 1, key);
        }
    } else if (arr[mid] > key) {
        return firstocc(arr, start, mid - 1, key);
    } else {
        return firstocc(arr, mid + 1, end, key);
    }
}

int lastocc(int arr[], int start, int end, int key) {
    if (start > end) {
        return -1;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid] == key) {
        if (mid == end || arr[mid + 1] != key) {
            return mid;
        } else {
            return lastocc(arr, mid + 1, end, key);
        }
    } else if (arr[mid] > key) {
        return lastocc(arr, start, mid - 1, key);
    } else {
        return lastocc(arr, mid + 1, end, key);
    }
}

int main() {
    int arr[10] = {1, 2, 3, 3, 3, 3, 4, 5, 6, 7};
    int x = firstocc(arr, 0, 9, 3);
    int y = lastocc(arr, 0, 9, 3);
    cout << "The first occurrence of 3 is at index " << x << endl;
    cout << "The last occurrence of 3 is at index " << y << endl;

    return 0;
}

    