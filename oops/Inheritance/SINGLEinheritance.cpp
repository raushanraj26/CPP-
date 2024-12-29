// #include<iostream>
// using namespace std;

// class car{
//     public:
//     string name;
//     int weight;
//     int age;
//     void speedup(){
//         cout<<"speeding up"<<endl;
//     }
//     void breakmaaro(){
//         cout<<"break mardi"<<endl;
//     }
// };
// class Scorpio:public car{
    
// };

// int main(){
//     Scorpio raushan;
//     raushan.speedup();
//     return 0;

// }





// // multilevel inheritance



// #include<iostream>
// using namespace std;
                       
//                     //    fruit <---- Mango <---- alphanso
// class fruit{
//     public:
//     string name;
   
// };

// class mango:public fruit{
//     public:
//     int weight;
    
// };

// class alphanso:public mango{
//     public:
//     int sugarlevel;
    
// };
        

// int main(){
//     alphanso a;
//     cout<<a.name<<" "<<a.weight<<" "<<a.sugarlevel<<endl;
//     return 0;

// }





// // multiple Inheritence

// #include<iostream>
// using namespace std;
                       
                    
// class A{
//     public:
//     int physics;
   
// };

// class B{
//     public:
//     int chemistry;
    
// };

// class C:public A,public B{
//     public:
//     int maths;
    
// };
        

// int main(){
//     C obj;
//     cout<<obj.physics<<" "<<obj.chemistry<<" "<<obj.maths<<endl;

// return 0;
// }




// hierarchical inheritance



// multiple Inheritence

#include<iostream>
using namespace std;
                       
                    
class car{
    public:
    string name;
    int age;
    int weight;
    void speedup(){
        cout<<"speeding up"<<endl;
    }
   
};

class scorpio:public car{
    public:
    
    
};

class fortuner:public car{
    public:
    
    
};
        

int main(){
   scorpio s11;
   s11.speedup();

   fortuner f11;
   f11.speedup(); 

return 0;
} 