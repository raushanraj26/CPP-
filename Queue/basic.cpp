#include<iostream>
#include<queue>
using namespace std;


int main(){

queue<int>s;

// push
s.push(5);
s.push(6);
s.push(7);
s.push(8);
s.push(9);
s.push(10);

//size
cout<<"Size of queue is "<<s.size()<<endl;

//remove 
s.pop();   //remove first element
s.pop();


cout<<"Size of queue is "<<s.size()<<endl;


//empty or not
if(s.empty()){
    cout<<"Queue is empty"<<endl;
}
else{
    cout<<"Queue is NOT empty"<<endl;
}

 //front element
 cout<<"Front element is "<<s.front()<<endl;

    return 0;
}