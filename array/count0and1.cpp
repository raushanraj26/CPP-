#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,0,1,1,0,1,0,1,0,0,0};
    int size=11;
    
    int numzero=0;
    int numOne=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            numzero++;
        }
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]==1)
        {
            numOne++;
        }
    }
    cout<<"no of zeros:"<<numzero<<endl;
    cout<<"number of ones: "<<numOne<<endl;
  return 0;
}