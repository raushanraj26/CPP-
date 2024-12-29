#include<iostream>
using namespace std;
int main()
{ int j,i,n;


cin >> n;
  for(i=1;i<=n;i++)     // if i starts with zero then condition of will be j<i+1
  {
    for(j=1;j<=i;j++)
    {
        cout << "* ";
    
  }
   cout << endl;
       
    }
}
