#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int data){
        this->data = data;
        next = nullptr;
        prev = nullptr;
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
        Node* n = new Node(ele);
        if(tail == nullptr){
            tail = head = n;
            return;
        }
        tail->next = n;
        n->prev = tail;
        tail = n;

        size++;

    }

    void push_front(int ele){
        Node *n = new Node(ele);
        if(head==nullptr){
            head = tail = n;
            return;
        }
        n->next= head;
        head->prev=n;
        head = n;

        size++;
    }

    void pop_end(){
        if(tail==nullptr){
            cout<<"List underflow"<<endl;
            return;
        }
        if (tail==head){
            tail = head = nullptr;
            return;
        }
        Node *n = tail;
        tail->next = n;
        n->prev = tail;

        size--;

    }

    void pop_front(){
        if(head==nullptr){
            cout<<"List underflow"<<endl;
            return;
        }
        if(head==tail){
            head = tail = nullptr;
            return;
        }
        Node *n = head;
        head->next = n;
        n->prev = head;
        head = n;

        size--;
    }

    int view_last(){
        if(tail==nullptr){
            cout<<"List is empty"<<endl;
            return-1;
        }
        tail->data;
    }

    int view_front(){
        if(head==nullptr){
            cout<<"List is empty"<<endl;
            return -1;
        }
        head->data;
    }

    void display_lst(){
        Node *p = head;
        while(p!= nullptr){
            cout<<p->data<<""<<endl;            
        }

        cout<<endl;
    }
};

int main(){
    LinkedList lst;
    lst.push_end(10);
    lst.push_end(20);
    lst.push_end(30);
    lst.push_end(40);

    cout<<"Size of my list"<<lst.size<<endl;

    lst.push_front(50);
    lst.push_front(60);

    cout<<"First element of the list: "<<lst.view_front()<<endl;
    cout<<"Last element of the list: "<<lst.view_last()<<endl;

    lst.display_lst();

    lst.pop_end();
    lst.pop_front();

    lst.display_lst();

}