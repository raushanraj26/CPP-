#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node*prev;
    node*next;

    // constructor (initialising the node,at tym of creating node 
    // both pointer of node prev and next are NULL )
    node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

    ~node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memoery free for node with data" << val<<endl;
    }
};

void print(node*head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data <<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// gives length of LL
int getlength(node*head){
    int len=0;
    node *temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;

}

// insert at head
void insertAtHead(node* &head,int d){
    //   creating new node (data=2 and both prev and next pointer are null)
    node * temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

// insert at end
insertAtEnd(node* &tail,int d){
    // create node named temp
    node * temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

// insert at position
void insertAtPosition(node* &head,node* &tail,int position,int d){
    // insert at start
    if(position ==1){
        insertAtHead(head,d);
        return;
    }
    node * temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    // insert at last position
    if(temp->next==NULL){
        insertAtEnd(tail,d);
        return;
    }

    // creating a node for d
    node * nodetoinsert=new node(d); 
    nodetoinsert->next=temp->next;
    temp ->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
}

// DELETION OF ANY NODE
void deletenode(int position,node* &head){
    // deleting first or start node
    if(position==1){
        node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        // node be middle or last
        node * curr=head;
        node* prev= NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        curr ->prev=NULL;
        prev ->next=curr ->next;
        curr ->next=NULL;
        delete curr;
    }
}

int main(){

node* node1=new node(1);
 node *head=node1;
 node * tail=node1;
 print(head);

cout<<"Length of L.L is:"<<getlength(head)<<endl; 

insertAtHead(head,2);
print(head);

cout<<"Length of L.L is:"<<getlength(head)<<endl; 

insertAtHead(head,3);
print(head);

insertAtHead(head,4);
print(head);

insertAtHead(head,5);
print(head);


insertAtEnd(tail,25);
print(head);

insertAtHead(head,6);
print(head);

insertAtEnd(tail,26);
print(head);


insertAtPosition(head,tail,3,100);
print(head);

insertAtPosition(head,tail,1,200);
print(head);

deletenode(1,head);
print(head);

deletenode(9,head);
print(head);

deletenode(7,head);
print(head);



return 0;
}