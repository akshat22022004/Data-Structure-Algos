#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
        //constructor
        node(int data){
            this ->data = data;
            this -> next = NULL;
        }

};

node* reverse(node* &head){
    node*prev= NULL;
    node*curr = head;
    node* forward;
     while(curr!= NULL){
         forward = curr-> next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        
     }
     return prev;
}

void print(node* &head){
        node*temp = head;
        while(temp!= NULL){
            cout << temp -> data << " ";
            temp = temp-> next;
        }
        cout << endl;
     }
    


int main(){
    int n;
    cout << "Enter the number of elements in the linked list: ";
    cin >> n;

    node* head = NULL;
    node* tail = NULL;

    cout << "Enter the elements separated by spaces: ";
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        node* newNode = new node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    node* temp = reverse(head);
    print(temp);

    return 0;
}
