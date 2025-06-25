#include<iostream>
#include<unordered_map>

using namespace std;

bool solve(string &s1,string &s2){
    unordered_map<char,int>mpp;
    for(int i = 0; i<s1.size(); i++){
        mpp[s1[i]]++;
    }
    int i = 0;
    int j = 0;
    int count = mpp.size();
    int k  = s1.size();
    while(j < s2.size()){
        if(mpp.find(s2[j])!=mpp.end()){
            mpp[s2[j]]--;
            if(mpp[s2[j]] == 0){
                count--;
            }
        }
        if(j-i+1 < k)j++;
        if(j-i+1 == k){
            if(count == 0)return true;

             if(mpp.find([s2[i]])!=mpp.end()){
                mpp[s2[i]]++;
                if(mpp[s2[i]] == 1){
                    count++;
                }
            }
            i++;
            j++;
        }
    }
    return false;
}

int main(){
    
    string s1;
    cin >> s1;
    
    string s2;
    cin >> s2;

    bool ans = solve(s1,s2);

    cout <<"The output is : "<< ans << endl;
    return 0;
}