#include<iostream>
#include<limits.h>
using namespace std;
void FindMax(int arr[],int n,int i,int& maxi)
{
            //    yaha maxi ek pass by value pass hua to and
            //    maxi usme ek local variable hai so function khtm hote hi variable khtm ho jaayega
            //    so,hme pass by reference krna hoga & lgaakr
           
    if(i>=n)
    {
        // array agr khtam hogya,pura traverse hogya
        // toh wapas aa jaao
        return;
    }

            // 1 case solve kro 
            // current element ko max se check kro
           
           maxi=max(maxi,arr[i]);

        //  baaki recursion sambhalega
    FindMax(arr,n,i+1,maxi);
}

void FindMin(int arr[],int n,int i,int& mini)
{
    if(i>=n)
    {
        return;
    }
    
        //   1 case solve kro 
        //   mini ko update kro current element se
    if(mini>arr[i])
    {
        mini=arr[i];
    }
    FindMin(arr,n,i+1,mini);


}


int main()
{
    int arr[5]={-2,-1,-45,0,-508};
    int n=5;
    int maxi=INT_MIN;
    int i=0;

    FindMax(arr,n,i,maxi);
    cout<<"Maximum Element is:"<< maxi <<endl;
                                            //  endl lgaane se agla jo v output hoga dusre aayega line 
                                            //  ya cursor dusre line me chale jaata hai

    int mini=INT_MAX;
    FindMin(arr,n,i,mini);
    cout<<"Minimum Element is:"<< mini <<" ";


                                
                                //    hme main function me maxi ka value chaheye,
                                //   so  maxi ko  pass by reference pass krenge
                                //   so add "&"
    return 0;
}