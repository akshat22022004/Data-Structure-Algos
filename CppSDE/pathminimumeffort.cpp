#include <iostream>
#include <vector>
#include <queue>
#include <climits> // For INT_MAX
using namespace std;
int solve(vector<vector<int>> &heights) {
    int n = heights.size();
    int m = heights[0].size();
    vector<vector<int>> efforts(n, vector<int>(m, INT_MAX)); // Initialize efforts matrix with INT_MAX
    queue<pair<int, pair<int, int>>> q;
    q.push({0, {0, 0}});
    efforts[0][0] = 0;
    vector<int> dir = {-1, 0, 1, 0, -1}; // Direction array for traversing 4 neighbors
    while (!q.empty()) {
        auto front = q.front();
        int currentEffort = front.first;
        int x = front.second.first;
        int y = front.second.second;
        q.pop(); 
        for (int i = 0; i < 4; i++) {
            int newX = x + dir[i];
            int newY = y + dir[i + 1];
            if (newX >= 0 && newX < n && newY >= 0 && newY < m) {
                int newEffort = max(currentEffort, abs(heights[x][y] - heights[newX][newY]));
                if (newEffort < efforts[newX][newY]) {
                    efforts[newX][newY] = newEffort;
                    q.push({newEffort, {newX, newY}});
                }
            }
        }
    }
    return efforts[n - 1][m - 1];
}
int main() {
    int n, m;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> n >> m;
    vector<vector<int>> heights(n, vector<int>(m));
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> heights[i][j];
        }
    }
    int ans = solve(heights);
    cout << "The minimum effort required is: " << ans << endl;
    return 0;
}

