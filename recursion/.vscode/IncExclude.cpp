// include exclude problem

#include<iostream>
using namespace std;

void subString(string str,int i,string& output)
{
    if(i>=str.length())
    {
        cout<< output <<endl;
        return;
    }

    // exclude str[i]
      subString(str,i+1,output);

         
         //   include str[i]

    output=output + str[i];
    output.push_back(str[i]);
    subString(str,i+1,output);

}
int main()
{ 
    string str="ab";
    string output="";
    int i=0;
    subString(str,i,output);
    //  for(int j=0;j<output.size();j++)
    //  {
    //     cout<<output[j]<<endl;
    //  }







    return 0;

}