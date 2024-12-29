#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector<int>&v,int&n,int i)
{
//    base case   n-1 tk isisliye qki last 2nd element, last se compare hoga
 if(i==n-1)
 {
    return true;
 }

// ek case khud solv ekro
if(v[i]>v[i+1])
{
    return false;
}

// baaki recursiuon sambhal lega
return checkSorted(v,n,i+1);
}


int main()
{
    vector<int>arr{10,50,60,20,5};
    int n=arr.size();
    int i=0;
    bool isSorted=checkSorted(arr,n,i);
    if(isSorted){
        cout<<"array is sorted"<< endl;
    }
    else{
        cout<<"array is not sorted"<< endl;
    }
}