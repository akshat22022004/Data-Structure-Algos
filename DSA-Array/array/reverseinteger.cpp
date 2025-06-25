#include <bits/stdc++.h>
using namespace std;

int reverse(int n){
    vector<int> ans;
    bool isnegative = false;
    
    if( n < 0){
        isnegative = true; // Removed redeclaration of isnegative
    }
    
    int m = abs(n);
    
    while(m != 0){
        int x = m % 10;
        ans.push_back(x);
        m = m / 10; 
    }
    
    int num = 0;
    
    for(int i = 0; i < ans.size(); i++){
        if(num > (INT_MAX - ans[i]) / 10){
            return 0;  
        }
        num = num * 10 + ans[i];
    }
    
    if(isnegative){
        num = -num;
    }
    
    return num;
}

int main(){
    int n;
    cin >> n;

    int ans = reverse(n);

    cout << ans << endl;

    return 0;
}

