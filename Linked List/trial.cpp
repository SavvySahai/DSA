#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;              //'next' can have any name, basically to show tranversing with

    Node(int data){
    this->data = data;      // since data is already mentioned so implictly pointing to avoid confusion
    next = nullptr;
    }
};

class LinkedList{
    Node *head;
    Node *tail;
    public:
    int size;

    LinkedList(){
        head = nullptr;
        tail = nullptr;
        size = 0;
    }


    void push_end(int ele){
        Node *n = new Node(ele);
        if(tail==nullptr){
            tail = head = n;
            return;
        }
        
        head->next=n;
        
        size++;
    }
    
    void push_front(int ele){
        Node *n = new Node(ele);
        if(head==nullptr){
            tail = head = n;
        }
        
        tail->next=n;

        size++;
    }

    void pop_end(){
        if(tail==nullptr){
            cout<<"List underflow"<<endl;
            return;
        }
        if(tail==head){
            tail= head = nullptr;
            return;
        } 
        
    

        size--;
        
    }

    void pop_front(){
        if(head==nullptr){
            cout<<"List underflow"<<endl;
        }
        if(head==tail){
            head = tail = nullptr;
            return;
        }
    }

    //int view_last(){}

    //int view_front(){}

    //void dispaly_lst(){}

};

int main(){
    LinkedList lst;
    lst.push_end(10);
    lst.push_end(20);
    lst.push_end(30);
    lst.push_end(40);

    cout<<"Size of my list is "<<lst.size<<endl;

    lst.push_front(50);
    lst.push_front(60);

    //cout<<"First element in list is "<<lst.view_front()<<endl;
    //cout<<"Last element in list is "<<lst.view_last()<<endl;

    //lst.display_lst();

    lst.pop_end();
    //lst.pop_front();

    //lst.display_lst();

    return 0;
}
