//implement array to LInkedlist
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

//Find Length of LL
int lengthofLL(node* head){
    int cnt=0;
    //traverse LL
 node* temp=head;
 while(temp){
    temp=temp->next;
    cnt++;
 }
 return cnt;
}

int main(){
   vector<int> arr={12,5,3,7};
   node* head=convertArr2LL(arr);
   cout<<head->data;

 //traverse LL
 node* temp=head;
 while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
 }

cout<<endl;
cout<<"Length of LL is : "<<lengthofLL(head)<<endl;


    return 0;
}