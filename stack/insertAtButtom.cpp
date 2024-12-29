#include<iostream>
#include<stack>
using namespace std;


void solve(stack<int>& s,int target){
      //base case
      if(s.empty()){
        s.push(target);
        return;
      }
      int topElement=s.top();
      s.pop();
      //recurs. call
      solve(s,target);
      //back track
      s.push(topElement);
}

void insertatbottom(stack<int> &s){
   if (s.empty()){
    cout<<"stack is empty can't proceed"<<endl;
    return;
   }

   int target=s.top();  //top() function empty pe use nii hota hai
   s.pop();   //top element ko remove kro
    solve(s,target);

 }
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    insertatbottom(s);

   //printing stack
   while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
   } 

    return 0;
}