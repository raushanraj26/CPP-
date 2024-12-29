#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

    // constructor
    node(int data){
        this->data=data;
        this->next=NULL;

    }
};
 
//  insert at End
void insertatEnd(node* &tail,int d){
        // new node create
        node* newnode=new node(d);
        tail->next=newnode;
        tail=newnode;

    }

// print the L.L
void print(node* &head){
      node * temp=head;

      while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

      }
      cout<<endl;

}
int main(){

    // created a new node
    node * node1 = new node(1);
    
    // head pointed to node1(may be created node be 1st node)
    node*head=node1;
    node*tail=node1;
    print(head);

                        //    tail points last node and head points first node
insertatEnd(tail,2);  
                        // print function me head isiliye pass kr rhe hai qki head se hi ll ko print krna hai pura last tak            
print(head);

insertatEnd(tail,3);
print(head);




   return 0;

}
