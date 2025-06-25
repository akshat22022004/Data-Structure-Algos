#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int val) {
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};
node* createtree() {
    int data;
    if (!(cin >> data) || data == -1) {  
        return nullptr;
    }
    node* root = new node(data);
    root->left = createtree();
    root->right = createtree();

    return root;
}
int main() {
    node* root = createtree();

    return 0;
}
