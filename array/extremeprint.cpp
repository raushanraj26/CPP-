#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,60,70,80};
    int size=7;
    // loop starts at index 0
    int start=0;
     //    loop starts with index form last
    int end=size-1;
    while(true)
    {
        if(start>end)
        {
            // jb start wala loop end wala loop ko paar jaaye
            break;
        }
        if(start==end)
        {
            // both loop at same index so print at once in case of odd no of elaments
            cout<<arr[start]<<" ";
        }
        else
        {
                        //   normal case first start wala loop ko pri nt kro firr end wale loop ko
            cout<<arr[start]<<" ";  
            cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }
    return 0;
}