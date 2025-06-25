#include<iostream>
#include<algorithm>
using namespace std;

  bool checkreverse( const string &str){
    string rev = str;
    reverse(rev.begin(),rev.end());
    
    return (str==rev);
}



int main(){
    string str = "ABCDCBA";
    int ans = checkreverse(str);
    cout << ans << endl;
    return 0;
}