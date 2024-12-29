#include<iostream>
#include<string.h>
using namespace std;

int getlength(char name[])
{
  int length=0;
  int i=0;
  while(name[i] != '\0')
  {
    length++;
    i++;
  }
  return length;
                    // space complexity 1
                     //   timecomplexity o(n) becoz pure n size tk chlega
}          
                     

// reverse the string
// void mEANS KUCH nhi return krna
void reverseCharArray(char name[])
{ int i=0;
int n=getlength(name);
int j=n-1;
            // int array me pahke se size diya hota hai bt in char array firstly you will find length of char array

  while(i<=j)
  {
    swap(name[i],name[j]);
    i++;
    j--;
  }

//   for(;i<=j;)
//   {
//     swap(name[i],name[j]);
//     i++;
//     j--;
//   }

        
                //   timecoplexity O(n/2)=O(n) ,constant ignores, becoz n/2 times swAP kr rhe hai
                // 


}

int main()
{
    char name[100];
    cout <<"Enter your name:" << endl;
    cin >> name;
    cout<<"Length of string is: " << getlength(name) << endl;

    cout <<"initially: " << name << endl;
    reverseCharArray(name);
    cout << "After reversal process: " << name << endl;
                           
                            //   array pass by referce hota hai so jo v changes function me kroge wo sb changes main function me hoga and after changing jo name hoga wo print krega
  





    return 0;
}