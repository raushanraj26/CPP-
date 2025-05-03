//implement queue by linked list
#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node *next;
 
    node(int value){
        data=value;
        next=NULL;
    }
};

class queue
{
node *front;
node *rear;

public:
queue(){
    front=rear=NULL;
}

//queue is empty or not
bool isempty()
{
    return front==NULL;
}


//push element ionto queue
void push(int x){
    //empty
    if(isempty()){
        cout<<"pushed "<<x<<" into the queue"<<endl;
        front=rear=new node(x);
        return;
    }
    else{
        cout<<"pushed "<<x<<" into the queue"<<endl;
        rear->next=new node(x);
        if(rear->next==NULL){
            cout<<"Queue is overflow"<<endl;
        }
        rear=rear->next;

    }
}

void pop(){
    //empty toh nahi hai
    if(isempty()){
        cout<<"queue is underflow"<<endl;
        return;
    }
    else{
        cout<<"Popped "<<front->data<<" from the queue"<<endl;
        node * temp=front;
        front=front->next;
        delete temp;
    }
}

int start(){
    if(isempty()){
        cout<<"queue is empty"<<endl;
        return -1;
    }
    else {
        return front->data;
    }
}


};



int main(){
    queue q;
    q.push(5);
     q.push(51);
      q.push(115);
       q.push(511);
q.pop();
q.start();


       return 0;
}