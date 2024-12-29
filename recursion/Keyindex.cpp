
#include<iostream>
#include<vector>
using namespace std;

// int checkKey(string s,int n,int i,char key)
// {
//     //  base case
//     if(i>=n)
//     {
//         // not found
//         return -1;
//     }

//     // 1 case solve
//     if(s[i]==key)
//     {
//         return i;
//     }
//     // baki recursion sambhal lega
//     return checkKey(s,n,i+1,key);

// }
// int main()
// {
//   string s ="Raushan Raj";
//   int n=s.size();
//   char key='y';

//   int i=0; 
//   int ans=checkKey(s,n,i,key);
//   cout<< "key is at index: " << ans<< endl;  

//     return 0;
// }








// void checkKey(string s,int n,int i,char key)
// {
//     //  base case
//     if(i>=n)
//     {
//         // not found
//        return;
        
//     }

//     // 1 case solve
//     if(s[i]==key)
//     {
//         cout<<"key is found at: "<< i<< endl;
//         return; 
//             //   return aa gya so jo ek equal hoga wahi print krke return kr __cpp_delegating_constructors
//             //   yadi return n lgaate to jitna baar equal hoga utna print
        
//     }
//     // baki recursion sambhal lega
//     return checkKey(s,n,i+1,key);

// }

// int main()
// {
//   string s ="Raushan Raj";
//   int n=s.size();
//   char key='a';

//   int i=0; 
//   checkKey(s,n,i,key);
 
//     return 0;
// }





                                    //   sb index ko aaray me store krke return kro










void checkKey(string& s,int& n,int i,char& key,vector<int>& ans,int& count)
{
    if(i>=n)
    {
        return;
    }
    if(s[i] ==key)
    {
        ans.push_back(i);
        count++;
    }

    return checkKey(s,n,i+1,key,ans,count);
}

 int main()
{
  string s ="Raushan Raj";
  int n=s.size();
  char key='a';

  int i=0; 
  vector<int>ans;
  int count=0;
  checkKey(s,n,i,key,ans,count);

//  printing the element in vector array
int d = ans.size();
for(int i=0;i<d;i++)
{
    cout<<ans[i]<< " ";
}

cout<<endl;
cout<<"key occurence: "<<count<<" times"<<endl;
  

 
    return 0;
}                                   