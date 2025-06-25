#include<iostream>
#include<vector>
using namespace std;
//jis type ka answer return karna hai us type ka function banao
bool solve(vector<int>&nums){
    int count = 0;
    //agar ek se jyda condition hui jo non decreasing array banane se violate kr rhi hai 
    //iska matlab ek ko change krke wo kabhi non decreasing array nhi ban sakta
    for(int i = 0; i<nums.size(); i++){
        if(nums[i]>nums[i+1]){
            count++;
        }
        if(count>1)
        return false;
        //yha check kr rhe hai ki agar pehla hi element hai jo condition of non decreasing array violate kr rha hai
        // to use change kr dena hai
        // ya agr nums[i-1] chotoa hai nums[i+1] se
        if(i==0 || nums[i-1]<=nums[i+1]){
            nums[i]=nums[i+1];
        }
        else{
            // ya to nums[i+1]ko change kr do nums[i]se
            nums[i+1]=nums[i];
        }
    }
} 
int main(){
    int n ;
    cout << "Enter the no of elements : "<< endl;
    cin >> n;
    vector<int>nums(n);
    for(int i = 0; i<n; i++){
        cout << "Enter the elements : " << endl;
        cin >> nums[i];
    }
    //bool type ka answer return krna tha is case me 
    bool ans = solve(nums);
    cout << (ans ? "True":"false") << endl;
    return 0;
}