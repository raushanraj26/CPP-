// kisi char ka last occurence ka index find krna hai 
// one method- traverse string left to right
// 2nd method-traverse right to left


#include<iostream>
using namespace std;

 void lastOcc(string str,int i,int ch,int& ans,int n)
 {
    if(i>=n)
    {
       return;
    }
            //  1st case
      if(str[i]==ch)
      {
        ans=i;
      }  

        //    baaki recursion sambhal lega    
      lastOcc(str,i+1,ch,ans,n) ;

         
 }

  void lastOccRtoL(string str,int i,int ch,int& ans,int n)
 {
    if(i<0)
    {
       return;
    }
            //  1st case
      if(str[i]==ch)
      {
        ans=i;
        return;
         //   return becoz mujhe iske bdd nii check krna hota nhai 
         //   uahi last element hoga
      }  

        //    baaki recursion sambhal lega    
      lastOcc(str,i-1,ch,ans,n) ;

         
 }

int main()
{
   string str;
   cout<<"enter the string"<<endl;
   cin>>str;
   char ch;
   cout<<"enter the character whose find index of last occurence"<<endl;
   cin>>ch;
int i=0;
int n=str.size();
int ans=-1;
lastOcc(str,i,ch,ans,n);
cout<<"when traverese left to right then Index is: "<<ans<<endl;
cout<<"when traverese right to left then Index is: "<<ans<<endl;

lastOccRtoL(str,i,ch,ans,n);



    return 0;

}