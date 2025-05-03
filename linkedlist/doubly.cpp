//tuf
#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* back;


     //constructor with two parameter
     public:
    node(int data1,node* next1,node* back1){
        data=data1;
        next=next1;
        back=back1;
    }

    //constructor with one parameter
     public:
    node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

node* convertArr2DLL(vector<int>& arr){
    node* head=new node(arr[0]);
    node* prev=head;
    
    for(int i=1;i<arr.size();i++)
     {
     node* temp=new node(arr[i],nullptr,nullptr);
     prev->next=temp;
     temp->back=prev;
     prev=temp;
     }
     return head;
}


//delte head
node* deleteHead(node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }

    node* prev=head;
    head=head->next;
  
                          //first node ko todo
    head->back=nullptr;
    prev->next=nullptr;
    delete prev;
    return head; 
}

//delete tail
node* deleteTail(node* head){
    //may be first or empty ll
     if(head==NULL || head->next==NULL){
        return NULL;
    }
    node* tail=head;
    while(tail->next!= NULL){
        tail=tail->next;
    }
    //prevTail points before tail
    node* prevTail=tail->back;
    prevTail->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;


}

//remove kth element
node* removeKthElement(node*head,int k){
    if(head==NULL){
        return NULL;
    }
    int cnt=0;
    node* kNode=head;
    while(kNode !=NULL){
        cnt++;
        if(cnt==k) break;
        kNode=kNode->next;

    }
    node* prev=kNode->back;
    node* front=kNode->next;
     

     //it has single element
    if(prev==NULL && front==NULL){
        return NULL;
    }
    else if(front==NULL){
        return deleteTail(head);
    }
    else if(prev==NULL){
        return deleteHead(head);
    }

    //prev and front joining
    prev->next=front;
    front->back=prev;

    // removing knode between prev and front
    kNode->next=nullptr;
     kNode->back=nullptr;
    delete  kNode;
    return head;
}

//delete given a particular node
void deleteNode(node* temp){
    node* prev=temp->back;
    node* front=temp->next;

    if(front==NULL){
        prev->next=nullptr;
        temp->back=nullptr;
        free(temp);
        return;
    }
    prev->next=front;
    front->back=prev;

    temp->next=temp->back=nullptr;
    free(temp);
}





//insert beforehead
node* insertBeforeHead(node* head,int val){
    node* newHead=new node(val,head,nullptr);
    head->back=newHead;
    return newHead;
}

//insert Before tail
node* insertBeforeTail(node* head,int val){
    if(head->next==NULL){
        return insertBeforeHead(head,val);
    }
    node* tail=head;
    while(tail->next != NULL){
        tail=tail->next;

    }
    node* prev=tail->back;
    node* newNode=new node(val,tail,prev);
    prev->next=newNode;
    tail->back=newNode;
    return head;

}

node* insertBeforeKthElement(node* head,int k,int val){
    if(k==1){
        return insertBeforeHead(head,val);
    }
    node* temp=head;
    int cnt=0;
    while(temp != NULL){
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }
    node* prev=temp->back;
    node* newNode=new node(val,temp,prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;
}



void insertBeforeNode(node* gnode,int val){
    node* prev =gnode->back;
    node* newNode=new node(val,gnode,prev);
    prev->next=newNode;
    gnode->back=newNode;

}

node*  insertAtTail(node* head,int k){
    if(head==NULL){
        return new node(k);
    }
    node* tail=head;
    while(tail->next != NULL){
        tail=tail->next;
    }
    node* newNode=new node(k,nullptr,nullptr);
    tail->next=newNode;
    return head;
}

void print(node* head){
    while(head!= NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}




int main(){
    vector<int> arr={12,5,3,7};
   node* head=convertArr2DLL(arr);
//    print(head);

//    head=deleteHead(head);
//    print(head);


//  head=removeKthElement(head,3);

    //head kabhi delete ni hoga isme me
// deleteNode(head->next);
// deleteNode(head->next->next);



// head=insertBeforeHead(head,85);



// head=insertBeforeTail(head,98);



// head=insertBeforeKthElement(head,2,89);

insertBeforeNode(head->next->next,100);


 print(head);


   return 0;
}