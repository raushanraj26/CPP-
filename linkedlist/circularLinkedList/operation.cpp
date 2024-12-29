#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

// constructor  
node(int d){
    this->data=d;
    this->next=NULL;
}
// deconstructor
~node(){
    int value=this->value;
    if(this->next!=NULL){
        delete next;
        next=NULL;
    }
    cout<<"memory free for node with data"<<value<<endl;
}
};

int main()
{









    return 0;

}