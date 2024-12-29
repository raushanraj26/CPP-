#include<iostream>
using namespace std;
int main()
{ int row,col ;
int n;
 //taking input from user
 
cin >> n;
    for(row=0;row<n;row++) {
        for(col=0;col<n;col++)
        { 
            if(row==0 || row==n-1 || col==0 || col== n-1)    // if(1) means if condition always true not execute the else part
           { 
             cout << "* " ;
           }
           else{
            cout << "  " ;  // 2 space becoz 1 space print hai and "*' and 'space' ke bdd v space common hai
           }
        }
        cout << endl;
    }

}