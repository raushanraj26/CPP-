#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

    
                                                //    nextSmaller



    // stack<int>s;
    // vector<int>ans(v.size());
    // s.push(-1);  //R-L me last element ha next smaller always -1
       
    //    for(int i=v.size();i>=0;i--){
    //     int curr=v[i];
    //     while(s.top()>=curr){     //jb tk top elmnt chhota mil ni jaata tbtk pop
    //          s.pop();
    //     }
    //     ans[i]=s.top();  //ans store smallest element
    //     s.push(curr);  //then push current element so for further elmnt
    //    }



                                                    //    prvious smaller elmnt
                                                    





 stack<int>s;
    vector<int>ans(v.size());
    s.push(-1);  //l-r me last element ha next smaller always -1
       
       for(int i=0;i<v.size();i++){
        int curr=v[i];
        while(s.top()>=curr){     //jb tk top elmnt chhota mil ni jaata tbtk pop
             s.pop();
        }
        ans[i]=s.top();  //ans store smallest element
        s.push(curr);  //then push current element so for further elmnt
       }



       //printing answer
       for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
       }
       cout<<endl;

       return 0;

}







                        //    by function
                               

    //   vector<int> prevSmallerelement(vector<int>&input){

    //   }

    //   vector<int> nextSmallerelement(vector<int>&input){
        
    //   }