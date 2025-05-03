                // Fibonacci series
                //find nth fibonacci number

#include<bits/stdc++.h>
using namespace std;



//memoization method-usied Arrays
 //time complexity-o(n) space complexity-o(n)


// int f(int n,vector<int> &dp ){
//     if(n<=1) return n;
//     if(dp[n]!=-1)return dp[n];

//     return dp[n]=f(n-1,dp)+f(n-2,dp);
// }

// int main(){
//   int n;
//   cin>>n;
//   vector<int>dp(n+1,-1);   //n+1 size ka array,initialise with -1
//   cout<<f(n,dp)<<endl;
//     return 0;
// }



  //by tabulation with space optimisation

  int main(){
    int n;
    cin>>n;
    int prev2=0,prev=1,curr=0;
    for(int i=2;i<=n;i++){
        curr=prev+prev2;
        prev2=prev;
        prev=curr;
    }
    cout<<n<<"th fibbonacci number is: "<<curr<<endl;
    return 0;
  }