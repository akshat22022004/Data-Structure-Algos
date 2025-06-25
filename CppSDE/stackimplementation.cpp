#include<iostream>
#include<stack>
using namespace std;
class Stack{
    private:
     int *arr;
      int top;
     int size;


     //constructor for stack;
     stack(int size){
        this->size= size;
        arr = new int[size];
        top = -1;
     }
     void push(int element){
        if(size-top>1){
           top++;
           arr[top]=element;
        }
        else{
            cout << "stack overflow"<< endl;
        }

     }
     void pop(){
        if(top>=0){
            top--;

        }
        else{
           cout << "stack underflow" <<endl; 
        }

     }
     int peek(){
        if(top>=0&&top<size){
        return arr[top];
        }
    else{
        cout << "stack is empty"<<endl;
        return -1;
    }

     }
     bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }

     }
};
int main (){
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(45);
    cout << st.peek() << endl
     return 0 ;
}