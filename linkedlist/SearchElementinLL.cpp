//searching in singly ll


#include<iostream>
#include<vector>
using namespace std;


class node{
    public:
    int data;
    node* next;

     //constructor with two parameter
     public:
    node(int data1,node* next1){
        data=data1;
        next=next1;
    }

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

int main(){
   vector<int> arr={12,5 ,8,9,60};
   node* head=convertArr2LL(arr);
   cout<<checkIfPresent(head,5);


    return 0;
}