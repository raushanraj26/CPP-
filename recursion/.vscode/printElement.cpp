#include<iostream>
using namespace std;

void Print(int A[],int n,int i)
{
    if(i>=n)
    {return;}
    cout<< A[i] << " -> " ;
    Print(A,n,i+1);
}

int main(){
    
 int A[5]={10,20,30,40,50};
 int n=5;
 int i=0;

 Print(A,n,i);
 




    return 0;
}