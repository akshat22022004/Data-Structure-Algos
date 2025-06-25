#include<iostream>
using namespace std;

int reversestring(string& str,int i,int j){
    if (i>j){
        return 0;
    }
   swap(str[i],str[j]);
   
   reversestring(str,i+1,j-1);
}
int main(){
    string name = "akitarksevoltahska";
     reversestring(name,0,name.length()-1);
     cout << "The string reversed is :"<< name << endl;
     return 0;
}