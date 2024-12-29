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
 
//  insert at Head
void insertatHead(node* &head,int d){
        // newnode create
        node*temp=new node(d);
        temp->next=head;
        head=temp;
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
    node * node1 = new node(300);
    // cout << node1 -> data<<endl;
    // cout << node1 -> next<<endl;

    // head pointed to node1
    node*head=node1;
    print(head);


insertatHead(head,120);
print(head);

insertatHead(head,1);
print(head);


insertatHead(head,40);
print(head);

   return 0;

}
