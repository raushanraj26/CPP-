#include<iostream>
#include<string.h>
using namespace std;


int getlength(char sentence[])
{
    int length=0;
    int i=0;
    while(sentence[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

void replaceSpaces(char sentence[])
{
    int i=0;
    // int n=getlength(sentence);
    int n=strlen(sentence);   
                        //    O(n) and niche wala v O(n) so O(n+n)=O(n)
                            
    for(i=0;i<n;i++)
    if(sentence[i] ==' ')
    {
        sentence[i] = '@';
    }


}
int main()
{
    char sentence[100];
    cin.getline(sentence,100);
    replaceSpaces(sentence);
    cout << "printing Sentence " << endl << sentence << endl;



    return 0;
}