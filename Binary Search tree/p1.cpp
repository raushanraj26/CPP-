#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    //constructor
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

node* inserIntoBST(node* root,int data){
    if(root==NULL){
        //this is the first node we have to create
        root=new node(data);
        return root;
    }

    //no of first node
    if(root->data > data){
        //insert in left
        root->left=inserIntoBST(root->left,data);

    }
    else{
        //insert into right
        root->right=inserIntoBST(root->right,data);
    }
}

void takeInput(node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=inserIntoBST(root,data);
        cin>>data;
    }
}


//level order Traversal
void levelOrderTraversal(node* root,vector<int>& ans){
    queue<node*>q;
    q.push(root);
    vector<int>ans;
    node* temp;
    while(!q.empty()){
        temp=q.front();
        q.pop();
        ans.push_back(temp->data);
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);

    }
    return ans;

}
//preorder traversal
void preOrderTraversal(node* root){
    //NLR
    if(root==nullptr){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

//Inorder traversal
void InOrderTraversal(node* root){
    //LNR
    if(root==nullptr){
        return;
    }
    preOrderTraversal(root->left);
    cout<<root->data<<" ";
    preOrderTraversal(root->right);
}
//postorder traversal
void postOrderTraversal(node* root){
    //LRN
    if(root==nullptr){
        return;
    }
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
    cout<<root->data<<" ";
    
}


//searching in bst------Assuming there are only unique values in tree
node* findNodeInBST(node* root,int target ){
    //base class
    if(root==NULL){
        return false;
    }
    if(root->data==target)
    return root;

    if(root->data < target){
        //search in right subtree
        return findNodeInBST(root->right,target);
    }
    else{
        //search in left sub tree
        return findNodeInBST(root->left,target);
    }

}

//MINIMUM VAKUE IN BST
int minVal(node* root){
    node* temp=root;
    if(temp==NULL){
        return -1;
    }
    //left me hi hota hai minimum
    while(temp->left != NULL){
        temp=temp->left;

    }
    return temp->data;   //means last node in left

}


/*/maximium vlaue in bst*/
int maxVal(node* root){
    node* temp=root;
    if(temp==NULL){
        return -1;
    }
    //left me hi hota hai minimum
    while(temp->right != NULL){
        temp=temp->right;

    }
    return temp->data;   //means last node in right

}



//delete node in bst
node* deleteNodeinBst(node* root,int target){
    //base class
    if(root==NULL){
        return root;
    }
     
    if(root->data==target){
        //isi ko dltr krna hai
        //4 cases arise
        if(root->left==NULL && root->right==NULL){
            //leaf node
            delete root;
            return NULL:
        }
        else if(root->left ==NULL && root->right !=NULL){
            node* child=root->right;
            delete root;
            return child;
        }
        else if(root->left !=NULL && root->right==NULL){
            node* child=root->left;
            delete root;
            return child;
        }
        else{
            //both child
            //find inorder predecessor in left subtree
            int inorederPre=maxVal(root->left);
            //replace root->data value with inorder predecessor
            root->data=inorederPre;
            //delete inorder predecessor from left subtree
            root->left=deleteNodeinBst(root->left,inorederPre);
            return root;
        }
    }
    else if(target>root->data){
        //right jaana chaheye
        root->right= deleteNodeinBst(root->right,target);
    }
    else if(target<root->data){
        
        //left jaana chaheye
        root->left= deleteNodeinBst(root->left,target);
    }
    return root;
}



int main(){
 node* root=NULL;
 cout<<"Enter the data for node"<<endl;
 takeInput(root);
 cout<<"printing the tree"<<endl;
//  levelordertraversal(root);
cout<<"printing inorder"<<endl;
 InOrderTraversal(root);
//  cout<<endl;
//  cout<<"printing preorder"<<endl;
//  preOrderTraversal(root);
//  cout<<endl;
//  cout<<"printing postorder"<<endl;
//  postOrderTraversal(root);



//  bool ans=findNodeInBST(root,45);
//  cout<<"present or not:" <<ans<<endl;


// cout<<"Minimum vcalsue is :" <<minVal(root) <<endl;
// cout<<"Maximum vcalsue is :" <<maxVal(root) <<endl;




// deleteNodeinBst(root,123);
// levelOrderTraversal(Root);

 return 0;
}