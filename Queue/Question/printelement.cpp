#include<iostream>
#include<queue>
using namespace std;
int main(){

queue<int>q;
q.push(10);
q.push(510);
q.push(102);
q.push(120);
q.push(102);
q.push(410);

//value print kro
int n=q.size();
while(n--){
    cout<<q.front()<<" ";
    q.push(q.front());   //first element ko last me kr do
    q.pop();  //then front ko pop kr do

}

cout<<endl;
cout<<"Size of queue is : "<<q.size();





    return 0;
}