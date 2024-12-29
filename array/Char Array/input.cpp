#include<iostream>
using namespace std;
int main()
{
   char name[100];
//    cin >> name;    or for run all character include space,underscore etc weuse in built func
    cout<<"enter your full name"<< endl;
     cin.getline(name,50);
                    //  by getline func gives all anme


                //    input is Raushan Raj

//    for (int i=0;i<8;i++)
//    {
//     cout <<"indes " << i<<" value:  " << name[i] << endl;
//    }

cout << name;

                 // output gives only Raushan raj






    return 0;
}