#include<bits/stdc++.h>
using namespace std;

class Trienode{
    public:
    char data;
    Trienode* children[26];           //kisi node ke 26 node hone jo each char ko piont krega
    bool isTerminal;

    //constructor
    Trienode(char d){
        this->data=d;
       
        this->isTerminal=false;
    }
};









//Insertion in tries
void insertWord(Trienode* root,string word){

cout<<"Inserting"<<word<<endl;

    //base base
    if(word.length()==0){
        root->isTerminal=true;
        return;
    }

    char ch=word[0];
    int index=ch-'a';
    Trienode* child;

    //if char present 
    if(root->children[index] != NULL){
        child=root->children[index];             //us index tk hle jaao
    }
    else{
        //if not present
        child=new Trienode(ch);
        root->children[index]=child;
    }

    //recursion sambhal lega

    insertWord(child,word.substr(1));
}

//search string
bool searchWord(Trienode* root,string word){
    //base class
    if(word.length()==0){
        return root->isTerminal;
    }

    char ch=word[0];
    int index=ch-'a';
    Trienode* child;

    //present
    if(root->children[index] != NULL){
        child=root->children[index];  //us index wale children pe move kro

    }else{
        //if present hi ni hai wo index wale children
        return false;
    }


    //recursive call
    searchWord(child,word.substr(1));

}


int main(){



    Trienode* root=new Trienode('*');

    // root->insertWord("coding");

    insertWord(root,"coding");
    insertWord(root,"raushan");
    insertWord(root,"raj");
    insertWord(root,"dada");
    insertWord(root,"ada");
    insertWord(root,"coder");
    insertWord(root,"coderboy");


    //searchin
    if(searchWord(root,"shone"))
    {
        cout<<"Present"<<endl;
    }else{
        cout<<"Absent"<<endl;
    }

    return 0;
}