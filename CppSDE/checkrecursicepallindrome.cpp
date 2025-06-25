#include<iostream>
using namespace std;
 int checkpallindrome(string& str, int i,int j){
    if(i>j)
    return false;
   
   if(str[i]==str[j]){
      return true;
    }
    else{
        return false;
    }
    checkpallindrome(str,i+1,j-1);
 }
int main(){
    string name = "abba";
   int ans =  checkpallindrome(name,0,name.length()-1);
    cout << ans << endl;
    return 0;
}