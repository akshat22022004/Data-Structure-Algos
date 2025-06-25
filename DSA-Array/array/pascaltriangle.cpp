#include<iostream>
#include<vector>

using namespace std;

vector<int>generate(int n){
   vector<int>output; 
   long long pr = 1;
   output.push_back(1);
   for(int i = 1; i< n; i++){
    pr = pr*(n-i);
    pr = pr/i;
    output.push_back(pr);
   }
    return output;
}
 vector<vector<int>>solve(int numrows){
    vector<vector<int>>ans;
    for(int i = 0; i<numrows; i++){
       
       vector<int>temp = generate(i+1);
       ans.push_back(temp);
    }
    return ans;
 }
int main(){
    
    int numrows;
    cin >> numrows;
    for(int i = 0; i<res.size(); i++){
        for(int j = 0; j<res[i].size(); j++){
            cout << res[i][j] <<  " ";
        }
    }
    return 0;
 }