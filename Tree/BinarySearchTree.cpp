#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node *left;
    Node *right;
    int data;

    Node(int ele){
        left = right = nullptr;
        data = ele;
    }
};

class BST{
    Node *root;

    void inorder_traversal(Node *root){           
        if(root == nullptr) return;

        inorder_traversal(root->left);
        cout<<root->data<<" ";
        inorder_traversal(root->right);
    }

    void preorder_traversal(Node *root){
        if(root == nullptr) return;

        cout<<root->data<<" ";
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }

    void postorder_traversal(Node *root){
        if(root == nullptr) return;

        postorder_traversal(root->left);
        postorder_traversal(root->right);
        cout<<root->data<<" ";
    }

    bool node_present(Node *root, int ele){
        if(root == nullptr) return false;
        if (ele == root->data) return true;

        if(ele <= root->data) return node_present(root->left,ele);
        else return node_present (root->right,ele);
        }
    
    //Insertion recur method 1
    //Wrong method; Why?

    // void insert_ele(Node *root, int ele){
    //     if(root == nullptr){
    //         root = new Node(ele);
    //         return;
    //     }
    //     if (ele <= root->data){
    //         if(root->left == nullptr){
    //             root->left = new Node(ele);
    //             }else insert_ele(root->left, ele);
    //         }else{
    //             if(root->right == nullptr){
    //                 root->right = new Node(ele);
    //                 }else insert_ele(root->right, ele);
    //             }
    //     }

    //Insertion recur method 2
    //This is a right method

    Node* insert_ele(Node *root, int ele){
        if(root == nullptr){
            return new Node(ele);
        }
        if(ele <= root->data){
            root->left = insert_ele(root->left,ele);
        }else root->right = insert_ele(root->right,ele);
        
        return root;
        
    }
        
    public:
    BST(){
        root = nullptr;
    }

    //Iterative way of insertion (Iterative function means we use the while conditions)
    //It is different from recursive functions as in recursive functions, we call the same function by it's name.
    //Also, we can call the iterative function in the public domain itself, unlike rrecursive, the data members can be aceesses without faultering with the program.

    // void insert_ele(int ele){
    //     Node *n = new Node(ele);
    //     Node *p = root;

    //     if(p == nullptr){
    //         root = n;
    //         return;
    //     }

    //     while(p!= nullptr){
    //         if(ele <= p->data){
    //             if(p->left == nullptr){
    //                 p->left = n;
    //                 return;
    //             }
    //             p = p->left;
    //         }else{ 
    //             if(p->right == nullptr){
    //                 p->right = n;
    //                 return;
    //             }
    //             p = p->right;
    //         }
    //     }


    // }

    void inorder(){
        if(root == nullptr){
            cout<<"Tree is empty"<<endl;
            return;
        }
        cout<<"Inorder: ";
        inorder_traversal(root);
        cout<<endl;
    }

    void preorder(){
        if(root == nullptr){
            cout<<"Tree is empty"<<endl;
            return;
        }
        cout<<"Preorder: ";
        preorder_traversal(root);
        cout<<endl;
    }

    void postorder(){
        if(root == nullptr){
            cout<<"Tree is empty"<<endl;
            return;
        }
        cout<<"Postorder: ";
        postorder_traversal(root);
        cout<<endl;
    }

    //For insertion M1
    // void insert(int ele){
    //     insert_ele(root,ele);
    // }

    //For inertion M2
    void insert(int ele){
        root = insert_ele(root,ele);
    }

    void is_present(int ele){
        if(node_present (root,ele)){
        cout<<ele<<" is Present";
        }else{
        cout<<ele<<" is Not Present";
        }
    }

    
};

int main(){
    BST tree;
    vector<int> arr = {56,33,24,56,98,11,45,69,6,23,45,77,43};

    for(int ele : arr){
        tree.insert(ele);
    }

    tree.inorder();
    tree.preorder();
    tree.postorder();

    tree.is_present(24);

    return 0;
}