#include <bits/stdc++.h>
using namespace std;

class Node{
    int data;
    Node *next;     //next can have any name, basically to show tranversing with

    Node(){
    this->data = data;      // since data is already mentioned so implictly mentioning to avoid confusion

    }
};

class LinkedList{
    Node *head;
    Node *tail;

    LinkedList(){
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
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

    cout<<"First element in list is "<<lst.view_front()<<endl;
    cout<<"Last element in list is "<<lst.view_last()<<endl;

    lst.display_lst();

    lst.pop_end();
    lst.pop_front();

    lst.display_lst();

    return 0;
}
