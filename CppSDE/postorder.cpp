#include<iostream>
#include<queue>
using namespace std;
class node{
public:
    int data ;
    node*left;
    node*right;
    //constructor
    node(int d){
        this ->data = d;
        this ->left = NULL;
        this ->right = NULL;
    }
};
     node* createbtree(node* root){
        cout << "Enter the data " << endl;
        int data;
        cin >> data;
        if(data == -1){
            return NULL;
        }
       root = new node(data);
       cout << "The left part of the binary tree" << " " ;
       root -> left = createbtree(root->left);
       cout << "The right part of the binary tree" << " " ;
       root->right = createbtree(root->right);
     }

      void postorder(node*root){
        if(root == NULL){
            return ;
        }
        postorder(root->left);
        cout << root->data <<  endl;
        postorder(root->right);
        
      }
      void preorder(node*root){
        if(root == NULL){
            return ;
        }
        cout << root->data <<  endl;
        preorder(root->left);
        preorder(root->right);
        
      }
     void levelordertreeformation(node* root){
        queue  <node*> q;
        cout << "Enter the data: " << endl;
        int data; 
        cin >> data;
        root = new node(data);
        q.push(root);

        while(!q.empty()){
            node*temp = q.front();
            q.pop();
            cout << "Enter the leftnode data" << endl;
            int leftdata;
            cin >> leftdata;
            
            while(leftdata!=-1){
                temp->left = new node(leftdata);
                q.push(temp->left);
            }
            cout << "Enter the rightnode data" << endl;
            int rightdata;
            cin >> rightdata;
            
            while(rightdata!=-1){
                temp->right = new node(rightdata);
                q.push(temp->right);
        }
      }
      }

int main(){
    node* root = NULL;
     // 3 7 1-1 -1 11 -1 -1 5 17 -1 -1 -1 
    root =  createbtree(root);

     postorder(root);
     preorder(root);
     levelordertreeformation(root);

     
     return 0;

}