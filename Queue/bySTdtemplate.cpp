

//Implement queue using standard template library

#include<iostream>
#include<queue>
using namespace std;

int main(){

//how to create queue
queue<int>q;
q.push(5);
q.push(10);
q.push(11);
q.push(15);
q.push(41);
q.push(78);

//delete
q.pop();

//front element
cout<<"front element is "<<q.front()<<endl;


//back element
cout<<"Back element is "<<q.back()<<endl;


//size
cout<<q.size()<<endl;

//empty

cout<<q.empty()<<endl;



    return 0;
}