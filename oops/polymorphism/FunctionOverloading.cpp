#include<iostream>
using namespace std;

class math{
    public:
                                //    here sum function is in multiple 
                                //    form as by paramamters
    int sum(int a,int b){
        cout<<"first function is calling..."<<endl;
        return a+b;
    }

    // return type me change hua nad parameter same then give error
    // you can change only in parameter not in return typethis is the example of two parameter but differ in return type
    // double sum(int a,int b){
    //     cout<<"first function is calling..."<<endl;
    //     return a+b;
    // }

     int sum(int a,int b,int c){
        cout<<"second function is calling..."<<endl;
        return a+b+c;
    }

     int sum(int a,float b){
        cout<<"third function is calling..."<<endl;
        return a+b;
    }
};
int main(){
    math obj;
    cout <<obj.sum(2,5,7);
         

      

    return 0;
}