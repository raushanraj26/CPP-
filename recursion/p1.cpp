

// reverse the string by recursion


// two pointer approach already we know


#include<bits/stdc++.h>
using namespace std;


                                                //    when you pass variables by reference (&), any modification inside the function affects the original variables
                                                //    in the caller. Since recursion involves multiple function calls (each with its own local execution context),
                                                //    passing s and e by reference causes all recursive calls to share the same s and e values.

// Recursive function
void stringReverse(string &str,int s,int e){
    //base case
    if(s>e) return;

    //one case solve kro
    swap(str[s],str[e]);

    //baaki recursion dekhega
    stringReverse(str,s+1,e-1);


}

int main(){
    string str="";
    cout<<"Enter string: "<<endl;
    // cin>>str;
    getline(cin, str); // Support multi-word input
    cout<<endl;
       
    int n=str.length();

    int s=0;
    int e=n-1;

    stringReverse(str,s,e);

    cout<<"Reversed string is:"<<str;
    return 0;
}