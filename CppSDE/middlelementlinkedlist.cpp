#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this->data = data;
        this-> next = NULL;
    }
};
int  getlength(node*&head){
    int len = 0;
    node*temp = head;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}
node* findMiddle(node*&head){
   int len = getlength(head);
   int ans = len/2;
   int cnt = 0;
   node*temp = head;
   while(cnt<ans){
    temp = temp->next;
    cnt++;
   }
   return temp;

}

void print (node* &head){
    node*temp = head;
    while(temp!=NULL){
        cout << temp ->data << " ";
        temp = temp-> next;

    }
    cout << endl;
}
int  main(){

    node*node1 = new node(10);
    node*node2 = new node(20);
    node*node3 = new node(30);
    node*node4 = new node(40);
    node*node5 = new node(50);
    node*node6 = new node(60);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = NULL;
    
    node* head = node1;
    node* middle = findMiddle(head);
   cout << "The middle node is:"<<middle->data << endl;

   return 0;

}
