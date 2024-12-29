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

//  insert at End
void insertatEnd(node* &tail,int d){
        // new node create
        node* newnode=new node(d);
        tail->next=newnode;
        tail=newnode;

    }
 
//  insert at position
void insertatPosition(node* &head,int position,int d){
    //    insert at start
    if(position==1){

        insertatHead(head,d);
    }

       
        node * temp=head;
                              //    temp pointer is used for traversing
        for(int i=1;i<position-1;i++){
            temp=temp->next;
        }
        // new node create
        node* newnode=new node(d);
        newnode->next=temp->next;
        temp->next=newnode;
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

insertatPosition(head,2,50);
print(head);

insertatPosition(head,3,60);
print(head);

// insertatPosition(head,1,70);
// print(head);     jb 1 me insert krne ho to ye code kaam nii krega so
//  ek condition lgaa add kro 

insertatPosition(head,1,80);
print(head);







   return 0;

}
