//min heap by stl(priority queue)




#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
          //min_heap
          priority_queue<int,vector<int>,greater<int>>pq;   //maintains max heap,parent>child,top always maximum
          pq.push(3);
          pq.push(6);
          pq.push(8);
          pq.push(9);
          pq.push(4);

          cout<<"Top element:"<<pq.top()<<endl;  //Manimum element
          pq.pop();
          cout<<"Top element:"<<pq.top()<<endl;  //Minimum element
          pq.pop();
          cout<<"Top element:"<<pq.top()<<endl;  //Minimum element
          pq.pop();
          cout<<"Top element:"<<pq.top()<<endl;  
          pq.pop();cout<<"Top element:"<<pq.top()<<endl;  
          pq.pop();

          cout<<"Size is:"<<pq.size()<<endl;

          if(pq.empty()){
            cout<<"Max hea is empty"<<endl;

          }else{
            cout<<"Max heap is not empty()"<<endl;
          }

    return 0;
}