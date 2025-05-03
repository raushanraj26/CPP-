// we are creating heap by STL ,which is Priority queue(it maintains max heap)


#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
          //max_heap
          priority_queue<int>pq;   //maintains max heap,parent>child,top always maximum
          pq.push(3);
          pq.push(6);
          pq.push(5);
          pq.push(8);
          pq.push(9);
          pq.push(4);

          cout<<"Top element:"<<pq.top()<<endl;  //Maximum element
          pq.pop();
          cout<<"Top element:"<<pq.top()<<endl;  //Maximum element
          pq.pop();

          cout<<"Size is:"<<pq.size()<<endl;

          if(pq.empty()){
            cout<<"Max hea is empty"<<endl;

          }else{
            cout<<"Max heap is not empty()"<<endl;
          }

    return 0;
}