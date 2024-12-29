#include<iostream>
#include<vector>
using namespace std;
int main()
{

    // pair sum
  vector<int> arr{10,20,30,60,70};
  int sum=80;

//   print all pairs
// outer loop will traverse for each element

  for(int i=0;i<arr.size();i++)
  {
    int elements=arr[i];
    // for every element,will traverse on aage wala elmnts
    for(int j=i+1;j<arr.size();j++)
    {
        // cout << "pair" << elements << "with" <<arr[j] << endl;
       
        if(elements+arr[j]==sum)
        {
           cout << "pair found" << elements << "," << arr[j] <<endl;
        }
    }
  }

    return 0;
}