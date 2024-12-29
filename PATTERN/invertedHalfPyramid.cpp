#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin >> n;
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}