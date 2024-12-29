#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>& s,int target){
    //base case
      if(s.empty()){
        s.push(target);
        return;
      }
      int topElement=s.top();
      s.pop();
      //recurs. call
      insertAtBottom(s,target);
      //back track
      s.push(topElement);
}

void reverseStack(stack<int>&s){
    //base case
     if(s.empty()){
        return;
     }
    int target=s.top();
    s.pop();

    //reverse stack
    reverseStack(s);
    //insert at bottom target ko
    insertAtBottom(s,target);
}
int main(){

 stack<int>s;
 s.push(10);
 s.push(20);
 s.push(30);
 s.push(40);
 s.push(50);

 cout<<"before reverse,stack is"<<endl;
   while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
   } 

 reverseStack(s);

cout<<endl;
 cout<<"After reverse,stack is"<<endl;
   while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
   } 

    return 0;
}