// constructor consturctor khelte hai

#include<iostream>
using namespace std;

class Animal{
    public:

    Animal(){
        cout<<"I am inside animal constructor "<<endl;

    }
    virtual void speak(){
        cout<<"Speaking"<<endl;
    } 
};

class Dog:public Animal{
    public:
    // override
    Dog(){
        cout<<"I am inside dog constructor "<<endl;

    }
    virtual void speak(){
        cout<<"barking"<<endl;
    }

};

int main(){
    // Animal* a=new Animal();
    // a->speak();

    // Dog* a=new Dog();
    // a->speak();

    // upcastting
    // Animal* a=new Dog()
    // a->speak();

//     downcasting
//     Dog* b=(Dog*)new Animal();
//     b->speak();

    

// constructor-constructor khelte hai






                    //    isme animal constructor call hua
// Animal* a=new Animal();

// Animal* a=new Dog();
//                       dono constructer call hua



// Dog * a=new Dog();
                        //    dono constructer call hua




Dog* a=(Dog*)new Animal();
                            //    Animal constructor call hua


  return 0;
}