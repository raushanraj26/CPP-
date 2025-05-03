//print all subsequences whose sum is equal to sum K

//print all subsequences

#include<bits/stdc++.h>
using namespace std;

void printSubsequence(int idx,vector<int> &ds,int &sum,int arr[],int n,int target){
    //base case    --   print kr do single subsequence ko
    if(idx==n){                                                   //last tk pahuchne ke bdd hi hmlog print kraa rhe hai
        if(sum==target){
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
    
        }
        return;
    }


   //pick or take element at idx wala and move forward
   ds.push_back(arr[idx]);
   sum+=arr[idx];
   printSubsequence(idx+1,ds,sum,arr,n,target);
   
   

   //not take or not pick --this element is not added in ur subsequences
   ds.pop_back();    // nii liye so remove kr diye
   sum -= arr[idx];
   printSubsequence(idx+1,ds,sum,arr,n,target);

}


int main(){
int arr[]={1,2,1};
int n=3;
vector<int>ds;  //which stores the each subsequence whose sum equal to k
int target=2;
int sum=0;          
printSubsequence(0,ds,sum,arr,n,target);
    return 0;
}