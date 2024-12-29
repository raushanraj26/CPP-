// #include<iostream>
// using namespace std;
// int main()
// { int row,col,i;
//     for(row=0;row<3;row++) 
//     {
        
//         { //first row or last row
//             if(row==0 || row==2){
//                 for(col=0;col<5;col++)
//                 {
//                     cout<<"*";
//                 }
//             }
//             else{ //remaining middle rows
//             //first star
//                 cout<<"*";
//                 //spaces
//                 for(i=0;i<3;i=i+1)
//                 {
//                     cout<<" ";
//                 }
//                 //last star
//                cout<<"*";
//             }
//         }
//         cout << endl;
//     }

// }


//for generalise term of hollow rectangle

#include<iostream>
using namespace std;
int main()
{ int row,col,i;
int rowcount,colcount;
cin >> rowcount;
cin >> colcount;
    for(row=0;row<rowcount;row++) 
    {
        
        { //first row or last row
            if(row==0 || row==rowcount-1){
                for(col=0;col<colcount;col++)
                {
                    cout<<"*";
                }
            }
            else{ //remaining middle rows
            //first star
                cout<<"*";
                //spaces
                for(i=0;i<colcount-2;i=i+1)
                {
                    cout<<" ";
                }
                //last star
               cout<<"*";
            }
        }
        cout << endl;
    }

}