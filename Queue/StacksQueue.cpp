#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int arr[5];
    int front;
    int rear;
    int size;

    Queue(){
        front = rear = size = 0;
    }

    void push(int arr){
        if(size == 5){
            cout<<"Queue saturated"<<endl;
            return;
        }
        if(size == 0){
            cout<<"Queue underrflow"<<endl;
            return;
        }
        arr[] = rear;
        rear++;

        size++;
    }

    void pop(){
        if(size == 0){
            cout<<"Queue underrflow"<<endl;
            return;
        }

        size--;
    }

    void peek(){
        if(size == 0){
            cout<<"Queue underrflow"<<endl;
            return;
        }



    }

    int size(){
        return get_size();
    }

};

int main(){
    Queue q;

    for(int i = 0 ; i <= 5 ; i++){
        q.push[i];
    }
    cout << ""

}