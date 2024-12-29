#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //create vector
    vector<int> arr;
    // int ans=(sizeof(arr)/sizeof(int));
    // cout<<ans<<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    // insert
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(10);

    //print
    // here size is find by arr.size()

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

                // remove or delete

    arr.pop_back();

             // last element delete

            //  print after delete
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
               
                //   2nd part(size se insert kro )
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
   vector<int> brr(n,-1);
                //    here brr have all elements with -1 bt by default 0
    cout<<"size of b "<<brr.size()<<endl;
    cout<<"capacity of b "<<brr.capacity()<<endl;
            //    print the brr
    for(int i=0;i<n;i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;

      
    return 0;
}