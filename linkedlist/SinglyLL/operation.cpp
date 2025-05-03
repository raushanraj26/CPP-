//implement basic operastion of singly ll



#include<iostream>
#include<vector>
using namespace std;


class node{
    public:
    int data;
    node* next;

    //  //constructor with two parameter
    //  //inser at head me use hai
    //  public:
    // node(int data1,node* next1){
    //     data=data1;
    //     next=next1;         //newNode ke next me jo given head hai use point kro
    // }

    //constructor with one parameter
     public:
    node(int data1){
        data=data1;
        next=NULL;
    }
};


//first convert array to LL
node* convertArr2LL(vector<int> &arr){
    node* head=new node(arr[0]);
    node* mover=head;
    for (int i=1;i<arr.size();i++){
        node* temp=new node(arr[i]);
        mover->next=temp;  //mover new temp ko point krenge
        mover=temp;
    }
    return head;   //starting(head) return krta hai LL me,all LL nii hoga return 

}

int checkIfPresent(node* head,int val){
     //traverse LL
 node* temp=head;
 while(temp){
    if(temp->data==val){
        return 1;
    }
    temp=temp->next;
 }
 return 0;
}

//traverse LL and print
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//removehead elemnt
node* removeHead(node* head){
    if(head==NULL){
        return head;
    }
    node* temp=head;
    head=head->next;
    delete temp;
    return head;

}

//delete middle or tail node
node* removeTail(node* head){
    if(head==NULL || head->next==NULL){
         return NULL;
    }
    node* temp=head;
    while(temp->next->next !=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    return head;

}
node* removeEL(node* head, int el){
    if(head==NULL) return head;
    if(head->data==el) {
        node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    node* temp=head;
    node* prev=NULL;
    while(temp!=NULL){
        if(temp->data==el){
            prev->next=prev->next->next;
            free(temp);
            break;

        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}


//new node create krke head pe add krte jaao
node* insertAtHead(node* &head,int val){
    //new node
    node* temp=new node(val);
    temp->next=head;     //new node ke next me head   ,insert at beg 
    head=temp;     
}

//insert at tail
void InsertAtTail(node* &tail,int d){
    //new node create
    node* temp=new node(d);
    tail->next=temp;                 //add temp with tail
    tail=tail->next;               //move tail forward
}




int main(){
//    vector<int> arr={12,5 ,8,9,60};
//    node* head=convertArr2LL(arr);
// //    cout<<checkIfPresent(head,5);
// //    head=removeTail(head);
// //    print(head);


// // head=removeEl(head,15);
// // print(head);

// head=insertHead(head,89);
// print(head);



// -----------starts here----------



node* node1=new node(10);


// node* head=node1;
// print(head);


// insertAtHead(head,50);
// print(head);


// insertAtHead(head,45);
// print(head);




node* head=node1;
node* tail=head;
print(head);
InsertAtTail(tail,14);
print(head);
InsertAtTail(tail,78);
print(head);

    return 0;
}