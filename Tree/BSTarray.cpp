#include <bits/stdc++.h>
using namespace std;

bool binary_search_recur(vector<int> &arr, int a, int b, int ele){
    if(a>b) return false;

    int m = a+b/2;

    if(arr[m] == ele) return true;

    if(ele < arr[m]) return binary_search_recur(arr,a,m-1,ele);     //The limit that we put from a to m-1 implies that the range we need to consider. And here if it says m-1 one that clearly means that we need to look in the lower half and similiar will be the case for  m+1.
    return binary_search_recur(arr,b,m+1,ele);

}

bool binary_search_itr(vector<int> &arr, int ele){      //For itr function we don't declare the int a and b values here but later on specify the 0 and stuff.
    int a = 0, b = arr.size()-1, m;

    while(a<=b){
        int m = a+b/2;
        if(arr[m] == ele) return true;
        if(ele < arr[m]) b = m-1;           // m is comsidered to be the middle number, so then we divide the array into 2 halves and then say that a is the lower limit and b is the upper limit
        else a = m+1;                       //Hence, m+1 means all the number till the upper half and same case applies to b as well
    }
    return false;
}

int main(){
    vector<int> arr = {24,56,78,90,103,115};

    int ele = 56;

    if (binary_search_itr(arr,ele)){
    //if (binary_search_recur(arr,0,arr.size()-1,ele)){ // for working of the itr function we will delete the 0 and arr.size()-1 as we have already mentioned that in the itr function itself.
        cout<<ele<<" is present"<<endl;
    }else{
        cout<<ele<<" not present"<<endl;
    }
    
    return 0;
   
}