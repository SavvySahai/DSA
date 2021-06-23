#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(){
        left = right = nullptr;
    }
};

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(11);

    Node *root  = new Node(1);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->left->left = new Node(10);

    Node *root = new Node(3);
    root->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right->left = new Node(8);
    
    


    





    

    return 0;
}