#include<iostream>
#include<stack>
using namespace std;
void insertSorted(stack<int>&s,int target){
    //base case
    if(s.empty()){
        s.push(target);
        return;
    }
    if(s.top()>=target){
        s.push(target);
        return;
    }
    int topelement=s.top();
    s.pop();
    insertSorted(s,target);

    //backtrack
    s.push(topelement);


}
void sortStack(stack<int>&s){
    //base case
    if(s.empty()){
        return;
    }
    int topelement=s.top();
    s.pop();
    sortStack(s);
    insertSorted(s,topelement);
}

int main(){
    stack<int>s;
    s.push(10);
    s.push(1);
    s.push(9);
    s.push(8);
    s.push(5);

//printing stack
   while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
   } 

    return 0;
}