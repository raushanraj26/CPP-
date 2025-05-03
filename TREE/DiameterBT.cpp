/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */











            //  -----Brute force approach-----
            //  time complexity=o(n^2)





// from top to bottom
// each node pe left and right ka max height find krte __has_include
// then maxdiameter ko update kr rhe hai add krke
// then jis node pe finde kree->uske left and right node pe yahi repeat kr rhe           





/*
class Solution {
    public:
    int heightCalc(TreeNode* root){
        if(root==NULL){
            return 0;
        }
    
        int lh=heightCalc(root->left);
        int rh=heightCalc(root->right);
    
        return 1+max(lh,rh);
    }
    
    void findMax(TreeNode* root,int &maxi){
         if(root==NULL){
              return;
            }
    
             
            //  top root se execute ho rha hai--->top to boottom chewck kr rhe
            //  each node pe
    
            int leftCount=heightCalc(root->left);        //  root ke left and 
                                                          // right ka height nikl rhe hai 
                                                          // then maxi me update kr rhe hai
                                                          // ye kaam each node pe ho rha hai
                                                           // left and right height nkl kr 
    
            int rightCount=heightCalc(root->right);
              maxi=max(maxi,leftCount+rightCount);
              findMax( root->left,maxi);    //jis root pe find kiya uske left me then right ke each node pe check kro
              findMax(root->right,maxi);
    }
        int diameterOfBinaryTree(TreeNode* root) {
           int maxi=INT_MIN;
           findMax(root,maxi);
           return maxi;
        }
    };

    */