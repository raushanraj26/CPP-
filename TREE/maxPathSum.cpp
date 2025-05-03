/*
leetcode-> 124
https://leetcode.com/problems/binary-tree-maximum-path-sum/
*/


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


    //  --brute force approach----o(n2)


                 
 /*
class Solution {
    public:
    //user function
    //3rd functionm
    int heightSum(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int lsum=heightSum(root->left);
        int rsum=heightSum(root->right);
    
        return root->val+max(rsum,lsum);
    }
    
    //2nd function
    int calcPath(TreeNode* root ,int &sum){
        if(root==NULL){
            return 0 ;
        }
        int lh=heightSum(root->left);
        int rh=heightSum(root->right);
    
        sum=max(sum,root->val+lh+rh);
         return root->val+max(rh,lh);
    }
    
    
    //first function
    
        int maxPathSum(TreeNode* root) {
            int sum=INT_MIN;
            calcPath(root,sum);
            return sum;
            
        }
    };


    */




    //-----optimal code------



    // separate height sum function ki jrurat nii,
    // calcPath iss functiuon ko nrecursive call krke path sum kr rhehai,
    //  better understanding dry run 
    

/*


    int calcPath(TreeNode* root ,int &sum){
        if(root==NULL){
            return 0 ;
        }
        // int lh=calcPath(root->left,sum);
        // int rh=calcPath(root->right,sum);
              
            //   Ignore negative paths when calculating left and right 
            // contributions,means if max(0,-1) takes 0 as max
        int lh = max(0, calcPath(root->left, sum));
        int rh = max(0, calcPath(root->right, sum));
    
        sum=max(sum,root->val+lh+rh);
         return root->val+max(rh,lh);
    }
        int maxPathSum(TreeNode* root) {
            int sum=INT_MIN;
            calcPath(root,sum);
            return sum;
            
        }
        */
    

// test cases=>
     
// root =
// [2,-1]
// Expected
// 2