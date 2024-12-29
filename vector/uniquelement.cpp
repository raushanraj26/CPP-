#include<iostream>
#include<vector>
using namespace std;
int findunique(vector<int>arr) 
//  not pssing size due to here is vector
{
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
        ans=ans^arr[i];
                        //  ans ko sbse ke sth xor kr diya ,,,same =0 and diff=1
    }

    return ans;

}
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    vector<int>arr(n);
    cout<<"enter the elements"<<endl;
             //taking input
    for(int i=0;i<arr.size();i++)
                                //  arr.size is used in vector 
    {
        cin>>arr[i];
    }
    int uniqueelements=findunique(arr);

    cout<<"unique elements is "<<uniqueelements<<endl;
    return 0;
}