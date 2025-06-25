#include <iostream>
using namespace std;

int main() {
    // Read the number of rows
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Allocate memory for a jagged array
    int** arr = new int*[n];

    // Read the number of columns for each row and allocate memory
    for (int i = 0; i < n; ++i) {
        int m;
        cout << "Enter the number of columns for row " << i + 1 << ": ";
        cin >> m;
        arr[i] = new int[m];

        // Input values into the 2D array
        cout << "Enter the elements for row " << i + 1 << ":" << endl;
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    // Output values from the 2D array
    cout << "The elements of the array are:" << endl;
    for (int i = 0; i < n; ++i) {
        int m;
        cout << "Enter the number of columns for row " << i + 1 << ": ";
        cin >> m;
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free allocated memory
    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
