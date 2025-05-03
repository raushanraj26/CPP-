#include<bits/stdc++.h>
using namespace std;
int main(){
  
    //creation
    unordered_map<string,int>m;

    //insertion
    pair<string,int>p=make_pair("scorpio",9);
    m.insert(p);

    pair<string,int>p2("alto",5);
    m.insert(p2);

    m["fortuner"]=10;

    m.insert({"Nexon",10});


    //access

 cout<<m.at("alto")<<endl;

 cout<<m["fortuner"]<<endl;



 //search by key

 cout<<m.count("fortuner")<<endl;

 cout<<m.count("Auto")<<endl;

 if(m.find("fortuner") != m.end()){
    cout<<"fortuner found"<<endl;
 }else{
    cout<<"fortner not found"<<endl;
 }


 //size

 cout<<m.size()<<endl;

 cout<<m["hummer"]<<endl;


 cout<<"if not not found then it creates memory and initialise value with 0"<<endl;
 cout<<m.size()<<endl;

 cout<<"printing all entries.."<<endl;
//iterate on map
 for(auto i:m){
    cout<<i.first<<"->"<<i.second<<endl;
 }


    return 0;
}