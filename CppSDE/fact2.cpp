#include<iostream>
using namespace std;
 
 int printnum(int n){
    if(n==0)
    return 1;
    //  cout << n << endl;
     printnum(n-1);
     cout << n << endl;
 }
int main(){
    int n; 
    cin >> n;
    int ans = printnum(n);
    cout << ans << endl;

    return 0;
}