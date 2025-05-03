#include<bits/stdc++.h>
using namespace std;


//check loop in LINKED LIST
// bool checkCircular(node* root){
//     unorered_map<node* ,bool>mpp;
//     node* temp=head;
//     while(temp!=NULL){
//         if(mpp.find(temp)!=mpp.end){
//             mpp[temp]=true;
//         }else{
//             return true;
//         }
//         temp=temp->next;
//     }
//     return false;
// }


int main(){

string s="thiruvananthapuram";
unordered_map<char,int>freq;
for(int i=0;i<s.size();i++){
    char ch=s[i];
    freq[ch]++;
}

for(auto i:freq){
    cout<<i.first<<" -> "<<i.second<<endl;
}

    return 0;
}