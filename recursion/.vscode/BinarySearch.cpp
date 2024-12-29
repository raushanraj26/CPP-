#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> arr,int s,int e,int key){
    int mid=(e+s)/2;
        
        //    key not found
        // invalid index
if(s>e)
{
    return -1;
}
    //  key found
if(arr[mid]==key)
{
    return mid;
}

    // for recursively call
if(arr[mid]<key)
{
return BinarySearch(arr,mid+1,e,key);
}
else{
    return BinarySearch(arr,s,mid-1,key);
}
}

int main(){

    vector<int>v{10,20,30,40,50,60};
    int n=v.size();
    int s=0;
    int e=n-1;
    int key=3;
    

    int ans=BinarySearch(v,s,e,key);

    if(ans){
        cout<<"found at index"<<ans<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }




    return 0;
}