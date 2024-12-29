#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[]={0,5,10,66,59,104};
    int size=6;
    // initialise the maxi variable with the minimum
    // possible int value
    int maxi=INT_MIN;     
                            // INT MIN AND MAX FUNC IS USED 
                            // FOR MAXIMUM AND MIN NUMBER IN THE ARRAY(negative positive aur mixed), here maxi me sbse min element storer kree hai fir sbse compare krke maximum no find krenge
    for (int i=0;i<size;i++)
    {
        if(arr[i]>maxi){
                              // found greater than maxi,
                             // update maxi
            
            maxi=arr[i];
        }
    }
    cout<<"maximum number"<<maxi<<endl;
    return 0;
}