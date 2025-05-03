//print the only one subsequequences (not  all) whose sum equal to target

//bool flag=false; se v kr skte ha bt likhna hoga
// if(sum==target && flag==false)

#include<bits/stdc++.h>
using namespace std;

bool printSubsequence(int idx,vector<int> &ds,int &sum,int arr[],int n,int target){
    //base case    --   print kr do single subsequence ko
    if(idx==n){                                                   //last tk pahuchne ke bdd hi hmlog print kraa rhe hai
        if(sum==target){
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
    
        }
        else return false;
        
    }


   //pick or take element at idx wala and move forward
   ds.push_back(arr[idx]);
   sum+=arr[idx];
   if(printSubsequence(idx+1,ds,sum,arr,n,target)==true){
    return true;
   }
   
   

   //not take or not pick --this element is not added in ur subsequences
   ds.pop_back();    // nii liye so remove kr diye
   sum -= arr[idx];
  if (printSubsequence(idx+1,ds,sum,arr,n,target)==true){
    return true;
   }


   return false;  //if upr me kahi v true nii means false

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
