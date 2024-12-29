#include<iostream>
using namespace std;

bool checkKey(string s,int n,int i,char key)
{
    //  base case
    if(i>=n)
    {
        // not found
        return false;
    }

    // 1 case solve
    if(s[i]==key)
    {
        return true;
    }
    // baki recursion sambhal lega
    return checkKey(s,n,i+1,key);

}
int main()
{
  string s ="Raushan Raj";
  int n=s.size();
  char key='u';

  int i=0; 
  bool ans=checkKey(s,n,i,key);
  cout<< "answer is:" << ans<< endl;  

    return 0;
}