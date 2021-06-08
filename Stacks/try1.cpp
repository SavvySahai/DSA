#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int res;

    }
};

int operator(char c){
   if(c == '+'|| c == '-'|| c == '*'|| c == '/')
      return 1;
}
   
int range {
   if(c >= "-200" && c <= "200")
      return 1;
}

void display(vector<string> token){
    for(string i: token){
        cout<<i<<" ";
    }

    cout<<endl;
}

int check(int a, int b, char operation){
    if(operation == "+")
    return b+a;

    else if(operation == "-")
    return b-a;

    else if(operation == "*")
    return b*a;

    else if (operation == "/")
    return b/a;

    else
    return "invalid";
}

int RPN {
    stack<string> token 

while (!check.empty()){
         a = token.top();
         token.pop();
         b =token.top();
         token.pop();
         res= token.push();         //we have to add an operator and then push back in the stack
}

    return 0;
}

int main(){
    vector<string> token;
    token.push_back("5");
    token.push_back("3");
	token.push_back("4");
	token.push_back("*");
	token.push_back("+");
	token.push_back("20");
    token.push_back("10");
    token.push_back("/");
    token.push_back("-");

    display(token);

   cout << "The result is: "<<endl;
   return 0;
}
