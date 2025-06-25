#include<iostream>
#include<string>
using namespace std;


bool check(string s, int i , int j){
    while(i < j){
       if(s[i]!=s[j]){
        return false;
    }
    i++;
    j--;
  }
  return true;
}
string solve(string s){
    int maxlen = 0;
    int startingindex = 0;
    for(int i = 0; i<s.size(); i++){
        for(int j = i; j<s.size(); j++){
            if(check(s,i,j)){
                if(j-i+1 > maxlen){
                    maxlen = j-i+1;
                    startingindex = i;
                }
            }
        }
    }
    return s.substr(startingindex ,maxlen);
}
 
int main(){
    string s;
     cin >> s;

     string res = solve(s);

     cout << res << endl;

     return 0;
}