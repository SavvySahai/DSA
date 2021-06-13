#include<bits/stdc++.h>
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
        Node *n = new Node(ele);
        if(tail == nullptr){
            tail = head = n;
            size = 1;
            return;
        }
        tail->next = n;
        n->prev = tail;
        tail = n;

        size++;
                
    }

    void push_front(int ele){
        Node *n = new Node(ele);
        if(head == nullptr){
            head = tail = n;
            size = 1;
            return;
        }
        n->next = head;
        head->prev= head;
        head = n;

        size++;

    }

    void pop_end(){
        if (tail == nullptr){
            cout<<"List underflow"<<endl;
            return;
        }
        if(tail == head){
            tail = head = nullptr;
            size = 0;
            return;
        }
        tail = tail->prev;
        tail->next= nullptr;

        size--;
    }

    void pop_front(){
        if(head == nullptr){
            cout<<"List underflow"<<endl;
            return;
        }
        if(head == tail){
            head = tail = nullptr;
            size = 0;
            return;
        }
        head = head->next;
        head->prev = nullptr;

        size--;
    }

    int view_front(){
        if(head == nullptr){
            cout<<"List is empty"<<endl;
            return -1;
        }
        return head->data;
    }

    int view_last(){
        if(tail == nullptr){
            cout<<"List is empty"<<endl;
            return -1;
        }
        return tail->data;
    }

    void display_lst(){
        Node *p = head;
        while(p!=tail){
            cout<<p->data<<""<<endl;
            p = p->next;
        }
        cout<<endl;
    }
};

class Stacks{
    LinkedList lst;
    public:

    void push(int ele){
        lst.push_end(ele);
    }

    void pop(){
        lst.pop_end();
    }

    int top(){
        return lst.view_last();
    }

    int size(){
        return lst.size;
    }
};

class Queue{
    LinkedList lst;
    public:

    int peek(){
        return lst.view_front();
    }

    void pop(){
        lst.pop_front();
    }

    void push(int ele){
        lst.push_end(ele);
    }

    int size(){
        return lst.size;
    }
};
  
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<"Size of the queue: "<<q.size()<<endl;
    cout<<"Topmost element of the queue: "<<q.peek()<<endl;

    q.pop();
    q.pop();

    cout<<"Size of the queue: "<<q.size()<<endl;
    cout<<"Topmost element of the queue : "<<q.peek()<<endl;

    return 0;

}