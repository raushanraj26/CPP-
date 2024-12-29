#include<iostream>
using namespace std;

void printDigit(int n){
    if(n==0)
    {
        return;
    }

    // baaki recursion sambhal lega
    // sidha print ke liye upr likho isko
    printDigit(n/10);
       
          //  one case solve
    int digit=n%10;
    cout<<digit<<" ";

    //     // baaki recursion sambhal lega
    // printDigit(n/10);


}
int main()
{
    int n=0;
    printDigit(n);

    if(n==0)
        //  if n zero hua to upr se direct return means kya return? 
        //  so diret zero likh do
    {
        cout<<0<<endl;
    }
    return 0;
}