

//1st approach->sort kro then kth index wala print kro
//2nd ->max heap create krke


#include<bits/stdc++.h>
#include<iostream>
using namespace std;





int getKthGreatestElement(int arr[],int n,int k){
    //create min heap
    priority_queue<int,vector<int>,greater<int>>pq;

    //insert initial k element of array
    for(int i=0;i<k;i++){
        pq.push(arr[i]);   //min heap ko automatic create krega
    }

    //for remaining elements ,push only if they are than top
    for(int i=k;i<n;i++){
        int element=arr[i];
        if(element>pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    int gr=pq.top();
    return gr;
}








int getKthSmallestElement(int arr[],int n,int k){
    //create max heap
    priority_queue<int>pq;

    //insert initial k element of array
    for(int i=0;i<k;i++){
        pq.push(arr[i]);   //max heap ko automatic create krega
    }

    //for remaining elements ,push only if they are than top
    for(int i=k;i<n;i++){
        int element=arr[i];
        if(element<pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    int ans=pq.top();
    return ans;
}
 



int main(){
int arr[]={10,5,20,4,15};
int n=5;
int k=2;
int ans=getKthSmallestElement(arr,n,k);
 cout<<k <<"nd Smallest is:"<<ans<<endl;

 int gr=getKthGreatestElement(arr,n,k);
 cout<<k <<"nd Greatest element is:"<<gr<<endl;
return 0;
}