//count subsequences whose sum is equal to target





#include<bits/stdc++.h>
using namespace std;

int printSubsequence(int idx,int &sum,int arr[],int n,int target){
    //base case    --   print kr do single subsequence ko
    if(idx==n){                                                   //last tk pahuchne ke bdd hi hmlog print kraa rhe hai
        if(sum==target){
            
            return 1;
    
        }
        else return 0;
        
    }


   //pick or take element at idx wala and move forward
   
   sum+=arr[idx];
   int l=printSubsequence(idx+1,sum,arr,n,target);
   
   

   //not take or not pick --this element is not added in ur subsequences
   
   sum -= arr[idx];
  int r=printSubsequence(idx+1,sum,arr,n,target);

   return l+r;  //if upr me kahi v true nii means false

}


int main(){
int arr[]={1,2,1};
int n=3;
vector<int>ds;  //which stores the each subsequence whose sum equal to k
int target=2;
int sum=0;          
cout<<"Total Count of Subsequences whose Sum equal to target is : "<<printSubsequence(0,sum,arr,n,target);
    return 0;
}
