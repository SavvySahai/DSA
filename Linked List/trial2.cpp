#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int data){
        this->data= data;
        next = nullptr;
        prev = nullptr;
    }
};

class LinkedList{
    //push_end, push_front, pop_end, pop_front, display
    Node *head;
    Node *tail;

    LinkedList(){
        head = nullptr;
        tail = nullptr;
        
    }
};

class Stack{
    //push, pop, top
    void push(){
        //  make a pointer that points to element
        /*  head = head->next 
            head->next = top
            top = n(n = new element)
        */
    }

};

int main(){
    /*name of stack
    eg: s.push(10);
        s.push(20);
        s.push(30);
    */
    
    return 0;
}