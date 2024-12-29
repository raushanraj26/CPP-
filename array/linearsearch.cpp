#include<iostream>
using namespace std;

// bool find(int arr[],int size,int key)
// {
//     //linear search
//     for(int i=0;i<size;i++)
//     {
//       if(arr[i]==key)
//       {
//         return true;
//       }
//     }

//     //not present
//     return false;
// }


int main()
{
 int size=5;
int arr[5]={1,3,5,7,8};
int key;
cout << "enter the search key" << endl;
cin >> key;

// if(find(arr,size,key)){
//     cout << "found" << endl;

// }
// else {
//     cout << "not found" << endl;
// }


            //  without function
            bool flag=0;
                //  0->not found
                //  1->found
            for(int i=0;i<size;i++)
            {
                if(arr[i]==key)
                {
                   flag=1;
                   break;
                }
            }
            if(flag)
            cout <<"present"<<endl;
            else
            cout<<"absent"<<endl;
return 0;

}