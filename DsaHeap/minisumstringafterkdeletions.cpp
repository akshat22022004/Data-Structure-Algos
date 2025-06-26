#include<bits/stdc++.h>

using namespace std;

int solve(string &s,int k){
    int n = s.size();
    unordered_map<char,int>mpp;
    for(auto it : s){
        mpp[it]++;
    }
    priority_queue<int>pq;
    for(auto it : mpp){
        pq.push(it.second);
    }
    while(!pq.empty() && k > 0){
        int top = pq.top();
        pq.pop();
        top--;
        k--;
        if(top > 0)pq.push(top);
    }
    int ans = 0;
    while(!pq.empty()){
        int top = pq.top();
        pq.pop();
        ans += top*top;
    }
    return ans;
}

int main(){
    int k;
    cin >> k;
    string s;
    cin >> s;
    int ans = solve(s,k);
    cout << ans << endl;
    return 0;
}
