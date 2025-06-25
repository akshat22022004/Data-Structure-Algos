#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

// Function to print the sum of each row
void printSum(int arr[][3], int row, int col) {
    cout << "Printing the sum" << endl;
    for (int r = 0; r < row; r++) {
        int sum = 0;
        for (int c = 0; c < col; c++) {
            sum += arr[r][c];
        }
        cout << sum << " ";
    }
    cout << endl; // Add a newline at the end for better readability
}

// Function to find the row with the largest sum
int largestSum(int arr[][3], int row, int col) {
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int r = 0; r < row; r++) {
        int sum = 0;
        for (int c = 0; c < col; c++) {
            sum += arr[r][c];
        }
        if (sum > maxi) {
            maxi = sum;
            rowIndex = r; // Change row to r to store the current row index
        }
    }
    cout << "The maximum sum is " << maxi << endl;
    return rowIndex; // Change return type to int to return the index
}

int main() {
    int arr[3][3];
    cout << "Enter the elements" << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cin >> arr[row][col];
        }
    }

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    // printSum(arr, 3, 3);1
    int ansIndex = largestSum(arr, 3, 3); 
    cout << "Max row is at index " << ansIndex << endl;
    return 0;
}
