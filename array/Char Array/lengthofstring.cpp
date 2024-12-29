#include<iostream>
#include<string.h>
using namespace std;

int getlength(char stri[])
{
    int length=0;
    int i=0;
    while(stri[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}
int main()
{
   char stri[100];
   cout<<"enetr anything"<< endl;
//    cin >> str;       it takes till first space 
                //    it akes all space ,underscore,etc

cin.getline(stri,100);

   cout << "Lenght is:" << getlength(stri) << endl;

   cout <<" also BY inbuilt function we get -" << "length is:" << strlen(stri) << endl;
    return 0;
}