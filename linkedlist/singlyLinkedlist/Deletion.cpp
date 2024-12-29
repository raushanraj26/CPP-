// kisi node ko delete krne se pahlke uss node ka next pointer ko  NULL kro phir delete hoga.
// isiliye null krte hai ki wo node kisi ko poin t nii kre 
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

    // deconstructor  is used for memory free
    ~node(){
        int value=this->data;
        // memoery free
        if(this->next !=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memoery is free for node with data"<<value<<endl;

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

void deleteNode(int position,node* &head){
            // deleting first or last node
        if(position ==1){
            node* temp=head;
            head=head->next;
            // memoery free start node
            temp->next=NULL; 
            delete temp;

        }
        else{
            // deleting any middle node or last node
            node* curr=head;
            node * prev=NULL;

            int cnt=1;
            while(cnt<position){
                prev=curr;
                curr=curr->next;
                cnt++;
                                            //  prev and current dono adjacent hona chaheye so 
            } 
                        //   traverse hone k bdd curr node ko todo and prev node ko ppibnt krro
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;              
         

        }
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

deleteNode(1,head);
print(head);

deleteNode(4,head);
print(head);







   return 0;

}
