#include<iostream>
using namespace std;
int main(){
int arr[10] = {23,122,41,67};
cout << " addres of 1st melory block"<< arr << endl;
cout << arr[0] << endl;
cout << " addres of 1st melory block"<< &arr[0] << endl;

cout << "4th"  << *arr << endl;
cout << "5th"  << *arr+1 << endl;
cout << "6th"  << *(arr+1) << endl;
cout << "5th"  << (*arr)+1 << endl;
// formulae = arr[i]= *(arr +i)
//important point = > isko i[arr]= *(i + arr) bhi likh sakte hai

return 0;
}