#include<iostream>
#include<vector>
using namespace std;








int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    return 0;
}