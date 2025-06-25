#include <bits/stdc++.h>
using namespace std;

string solve(string s){
    string temp = "aeiouAEIOU";
    string ans;
    for(int i = 0; i<s.size(); i++){
        for(int j = 0; j<temp.size(); j++){
            if(temp.find(s[i]) != string::npos){
                ans = ans + s[i];
            }
        }
    }
       int k = 0;
       reverse(ans.begin(),ans.end());
       for(int i = 0; i<s.size(); i++){
        for(int j = 0; j<temp.size(); j++){
            if(temp.find(s[i]) != string::npos){
                s[i]= ans[k++];
            }
        }
    }
    return s;
}
int main(){
   string s;
   // bewakoof string me kabhi loop nhi chalaya krte hai 
   // string ko seedh einput liya jaata hai
   cin >> s;

   string res = solve(s);
   cout << res << endl;

   return 0; 
}