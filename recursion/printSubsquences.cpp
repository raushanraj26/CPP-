//print all subsequences

#include<bits/stdc++.h>
using namespace std;

void printSubsequence(int idx,vector<int> &ds,int arr[],int n){
    //base case    --   print kr do single subsequence ko
    if(idx==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;

        return;
    }


   //pick or take element at idx wala and move forward
   ds.push_back(arr[idx]);

   printSubsequence(idx+1,ds,arr,n);

   

   //not take or not pick --this element is not added in ur subsequences
   ds.pop_back();    // nii liye so remove kr diye
   printSubsequence(idx+1,ds,arr,n);

}


int main(){
int arr[]={3,1,2};
int n=3;
vector<int>ds;  //which stores the each subsequence

printSubsequence(0,ds,arr,n);
    return 0;
}