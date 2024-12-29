#include<iostream>
using namespace std;


class queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

     //construcot
     queue(int size){
        this->size=size;
        arr=new int[size];
        front=0;
        rear=0;
     }

    //insert data
     void push(int data){
           if(rear==size){
            cout<<"q is full"<<endl;
           }
           else{
            arr[rear]=data;
            rear++;
           }  
     }

     //removal of first element

     void pop(){
           if(front==rear){
            cout<<"q is empty"<<endl;
           }
           else{
                    arr[front]=-1;
                    front++;
                    if(front==rear){
                        front=0;
                        rear=0;
                    }
              
                }
           }

     
     int getfront(){
                        if(front==rear){
                            cout<<"Q is empty"<<endl;
                            return -1;
                        }
                        else{
                            return arr[front];
                        }
     }


     bool isempty(){
         if(front==rear){
            return true;
         }
         else{
            return false;
         }
     }


     //size
     int getsize(){
        return rear-front;     //+1 nii hoga becoz rear always points empty location
     }

       




     };




int main(){

queue q(10);

q.push(5);
q.push(7);
q.push(2);
q.push(3);


cout<<"Size is "<<q.getsize()<<endl;


q.pop();


cout<<"Size is "<<q.getsize()<<endl;

cout<<"Front Element is"<<q.getfront()<<endl;


if(q.isempty()){
    cout<<"Queue is empty"<<endl;
}
else{
    cout<<"Queue is not empty"<<endl;
}



    return 0;
}