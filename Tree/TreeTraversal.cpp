#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int ele){                      //Don't forget to declare the values in the constructor
        data = ele;
        left = right = nullptr;
    }
};

    void inorder(Node *root){           //At the end we need to print the values of root, so root needs to point to the data
        if(root == nullptr) return;     //We use recursive call in this 
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }

    void preorder(Node *root){
        if(root == nullptr) return;
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }

    void postorder(Node *root){
        if(root == nullptr) return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }

int main(){
    Node *root = new Node(1);           //We can declare the root only once 
    root->left = new Node(2);           //Then we can use the normal navigation method and print
    root->left->left = new Node(11);    //This is implemented for a specific type of tree 

    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->left->left = new Node(10);

    root->right->right= new Node(5);
    root->right->right->left = new Node(6);
    root->right->right->left->left = new Node(8);
    root->right->right->left->left->right = new Node(9);

    root->right->right->right= new Node(7);

    cout<<"Preorder:  ";
    preorder(root);

    cout<<"Inorder: ";
    inorder(root);

    cout<<"Postorder:  ";
    postorder(root);

    return 0;
}