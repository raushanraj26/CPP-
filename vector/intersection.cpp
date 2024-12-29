#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int> arr{1,2,3,3,3,4,5,6};
   vector<int> brr{3,8,6};
   vector<int> ans;
     
    //  outer loop for arr vector
   for(int i=0;i<arr.size();i++)
   {

    // for every element,run loop on brr
    for(int j=0;j<brr.size();j++)
    {
        if(arr[i]==brr[j])
        {   
           
            // mark becoz fir dubara kisi se match n kre just like number assighm kro
            //  u take int_min as instead of -1
             brr[j]= -1;

            ans.push_back(arr[i]);
        }
    }
   }

//    print ans

   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i]<<" ";
   }

    return 0;
}