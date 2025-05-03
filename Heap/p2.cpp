
//Heapify---->tree ko max ya min heap bnaayega'
//node ko corect position dega yer heapify


//converting Array to Heap

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i){
    int index =i;   //koi random index i

    int leftindex=2*i;  // left child index
    int rightindex=2*i+1;   //right child index
    int largest=index;

    //check with leftchild element then updfate
    if(leftindex <= n && arr[largest]<arr[leftindex]){
        largest=leftindex;
    }

    /*/check with rightindex*/
    if(rightindex <= n && arr[largest]<arr[rightindex]){
        largest=rightindex;
    }


       
       if(index!=largest){
                //left ya right me se koi bara hoga current node se
                swap(arr[index],arr[largest]);
                index=largest;
                heapify(arr,n,index);
       }
    
}



void buildHeap(int arr[],int n){
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);    //for ean non-leaf node ke liye hea[ify( call kr rahe hai)]
    }
}

void heapSort(int arr[],int n){
    int index=n;
    while(n!=1){   //1 because at 0th index ,-1 hai by default
        swap(arr[1],arr[index]);
        index--;
        n--;

        //heapify
        heapify(arr,n,1);    //heapify top element ko krenge
    }
}


int main(){
   int arr[]={-1,12,15,13,11,14};   //-1 is random beacuse we need start 1 index array
   int n=5;
   buildHeap(arr,n);
 

   cout<<"printing heap"<<endl;
   for(int i=0;i<=n;i++){
    cout<<arr[i]<<" ";
   }

   cout<<endl;

   heapSort(arr,n);


   cout<<"printing Sorted heap "<<endl;
   for(int i=0;i<=n;i++){
    cout<<arr[i]<<" ";
   }



   return 0;

}