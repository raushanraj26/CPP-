#include<iostream>
using namespace  std;
class Animal{
    // state or properties
    int weight;

    public:
    int age;
    string type;

    // behaviour
    void eat()
    {
        cout<<"Eating"<<endl;
    }

    void sleep()
    {
        cout<<"Sleeping"<<endl;
    }
       
        // getter and setter is used for acceesing the private behaviour 
        // or properties
    int getweight(){
        return weight;
    }
    void setweight(int w){
         weight=w;
    }


};


int main(){
    // object creation

    // static
    Animal ramesh;
    ramesh.age=12;
    ramesh.type="liom";
    cout<<"age of ramesh:"<<ramesh.age<<endl;
    cout<<"Type of ramesh:"<<ramesh.type<<endl;

    ramesh

}