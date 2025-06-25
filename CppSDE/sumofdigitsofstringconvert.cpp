#include<iostream>
using namespace std;

int solve(string s, int k){
int n = s.size();
//int res = 0;
string temp;
for(int i = 0; i<s.size(); i++){
   int res = s[i]-'a'+1;
     temp += to_string(res);
}
int sum = 0;
for(int i = 0; i<k; i++){
    sum = 0;
    for(char c : temp){
        sum += c-'0';

    }
    temp = to_string(sum);
 }
  return sum;
}
int main(){

string s;
cin >> s;
int k ;
cin >> k;

int ans = solve(s,k);

cout << ans << endl;
return 0;
}