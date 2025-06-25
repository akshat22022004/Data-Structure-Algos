#include <iostream>
#include <queue>
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

void levelordertraversal(node* root) {
    if (!root) return;
    
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    
    while (!q.empty()) {
        node* temp = q.front();
        q.pop();
        
        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

int main() {
    node* root = NULL;
    

    root = buildtree(root);
    levelordertraversal(root);

    return 0;
}

