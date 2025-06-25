#include<iostream>
using namespace std;
class node {
 public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildtree(node* root) {
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    if (data == -1) {
        return NULL;
    }
    root = new node(data);
    cout << "Enter the data in the left side of the node: " << endl;
    root->left = buildtree(root->left);
    cout << "Enter the data in the right side of the node: " << endl;
    root->right = buildtree(root->right);
    return root;
}
void inorder(node* root){
    if(root == NULL)
    return;
    inorder(root->left);
    cout << root->data<< " ";
    inorder(root->right);

}

int  main(){
    node* root = NULL;
    
// 3 7 1-1 -1 11 -1 -1 5 17 -1 -1 -1 
    root = buildtree(root);
    cout << "inorder traversal is : ";
    inorder(root);

    return 0;

}