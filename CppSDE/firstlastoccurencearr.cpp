#include <iostream>
using namespace std;

int firstocc(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1; // Look on the left side for the first occurrence
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int lastocc(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1; // Look on the right side for the last occurrence
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[10] = {1, 2, 3, 3, 3, 3, 4, 5, 6, 7};
    int x = firstocc(arr, 10, 3);
    int y = lastocc(arr, 10, 3);
    cout << "The first occurrence of 3 is at index " << x << endl;
    cout << "The last occurrence of 3 is at index " << y << endl;

    return 0;
}
