#include<iostream>
#include<set>
#include<string>
using namespace std;

    string s;
    getline(cin,s);
    int count = 0;
    int vow = 0;
    int cons = 0;
    int whitespace = 0;
    string temp = "aeiouAEIOU";
    string temp2 = "0123456789";
    set<char>st;
    set<char>st2;
    for(int i = 0; i<temp.size(); i++){
        st.insert(temp[i]);
    }
    for(int i = 0; i<temp2.size(); i++){
     st2.insert(temp2[i]);
    }
    for(int i = 0; i<s.size(); i++){
        if(s[i] == ' '){
            whitespace++;
        }
        else if(st.find(s[i]) != st.end()){
            vow++;
        }
        else if(st2.find(s[i]) != st2.end()){
            count++;
        }
        else  {
           cons++;
        }
    }
    cout << vow << endl;
    cout << cons << endl;
    cout << count << endl;
    cout << whitespace << endl;
    return 0;
}