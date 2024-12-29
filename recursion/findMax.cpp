#include<iostream>
using namespace std;


void findMax(int* arr[],int n,int i,int& maxi)
                                                //  & symbol hai so pass by reference hai and dono jagah value change hoga
{
    // base case
    if(i>=n)
    {
        // array agr pura traverse ho ho gya toh wapas aa jaao
        return;
    }
    //    1 case solve kro,current element ko check kro for max
    if(arr[i]>maxi)
    {
        maxi=arr[i];
    }
    // baaki recursion sambhal lega
   findMax=(arr,n,i+1,maxi);
}

void findMin(int arr[],int n,int i,int& mini)
                                                //  & symbol hai so pass by reference hai and dono jagah value change hoga
{
    // base case
    if(i>=n)
    {
        // array agr pura traverse ho ho gya toh wapas aa jaao
        return;
    }
    //    1 case solve kro,current element ko check kro for max
    // if(arr[i]<maxi)
    // {
    //     mini=arr[i];
    // }
     mini=min(mii,arr[i]);

    // baaki recursion sambhal lega
   findMin=(arr,n,i+1,mini);
}  



int main()
{
    int arr[]={10,30,21,6,44,42,57,88};
    int n=8;
        int maxi=INT_MIN;
        int mini=INT_MAX;

        int i=0;
        findMax=(arr,n,i,maxi);
        findMin=(arr,n,i,Mini);
        cout<<"max no is:" <<maxi<<endl;
        cout<<"mINI no is:" <<mini<<endl;
        return 0;
        
}