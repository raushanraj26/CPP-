#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    int arr[]={1,2,3,4,5,6};
    for(int i=1;i<n;i+=2){
           swap(arr[i],arr[i-1]);
    }



    //print array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
 }
    return 0;
}