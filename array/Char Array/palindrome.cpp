#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(char word[])
{
    int i=0;
 int n=strlen(word);
  int j=n-1;
    while(i<=j)
    {
        // if(word[i]==word[j])
        // {
        //     i++;
        //     j--;
        // }
        // else{
        //     return 0;
        // }
        
       if(word[i] != word[j])
       {
        return 0;
       }
       else{
        i++;
        j--;
       }


    }
    return 1;
}
int main()
{char word[100];

   cout<<"enter the word: "<< endl;
   cin>> word;
   cout << "Palindrome Check: " << checkPalindrome(word);







    return 0;
}