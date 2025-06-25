#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    // Constructor
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void deleteNode(node*& head) {
    if (head == NULL || head->next == NULL) {
        return;
    }
    node* temp = head;
    while (temp != NULL && temp->next != NULL) {
        if (temp->next == temp->next->next) {
            node* next_next = temp->next->next;
            node* fordelete = temp->next;
            delete fordelete;
            temp->next = next_next;
        } else {
            temp = temp->next;
        }
    }
}

void printList(node*& head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* node1 = new node(10);
    node* node2 = new node(20);
    node* node3 = new node(30);
    node1->next = node2;
    node2->next = node3;
    node* head = node1;

    deleteNode(head);
    printList(head);

    return 0;
}
