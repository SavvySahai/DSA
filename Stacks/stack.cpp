#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> num;
    num.push(1); //change stacks!
    num.push(2);
    num.push(3);
    num.push(4);

    num.pop();
    num.pop();
    num.pop();
    
    while (!num.empty()){
        cout<<" "<<num.top();
        num.pop();
    }
}
