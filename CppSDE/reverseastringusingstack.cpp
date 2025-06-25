#include<iostream>
#include<stack>
using namespace std;
int main(){
//string banao pehle
string str = "lovebabbar";
// stack banao
stack <char>st;
//stack me store karqao 
for(int i = 0; i<str.length(); i++){
    char ch = str[i];
    st.push(ch);
}
// ans variable me reverse store kro uska 
string ans = " ";
while(!st.empty()){
    //humne charecter uthaya jo stack ke top pe hai
    char ch = st.top();
    //phir us charecter ko stack me push kr diya
    ans.push_back(ch);
//uske baad us charecter ko ans me push krne ke baad usko jis stack me save kiya tha usme se bhi hata diyq
    st.pop();
}
cout << ans << endl;
return 0 ;

}