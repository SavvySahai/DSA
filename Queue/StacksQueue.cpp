#include<bits/stdc++.h>
using namespace std;

class Queue{
    int arr[5];
    int front;
    int rear;
    int size;

    public:
    Queue(){
        front = rear = size = 0;
    }

    void push(int ele){
        if(size == 5){
            cout<<"Queue overflow"<<endl;
            return;
        }
        if(rear == 5){
            cout<<"Queue saturated"<<endl;
            return;
        }
        arr[rear] = ele;
        rear++;

        size++;
    }

    void pop(){
        if(size == 0){
            cout<<"Queue underflow"<<endl;
            return;
        }

        front++;

        size--;
    }

    int peek(){
        if(size == 0){
            cout<<"Queue empty"<<endl;
            return -1;
        }
        return arr[front];

    }

    int get_size(){
        return size;
    }

};

int main(){
    Queue q;

    for(int i = 0 ; i < 5 ; i++){
        q.push(i*5);
     }

    q.push(8);
    
    cout << "Size of queue: "<<q.get_size()<<endl;

     for(int i = 0 ; i <= 5 ; i++){
        cout<<q.peek()<<" ";
        q.pop();
     }

    cout << "Size of queue: "<<q.get_size()<<endl;

    q.push(9);
    return 0;

}