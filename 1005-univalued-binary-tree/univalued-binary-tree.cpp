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
class Solution {
public:
       void iot(TreeNode* root,bool &x, int y){
       if(root==NULL){
        return;
        }
        iot(root->left,x,y);
        if(root->val!=y){
            x=false;
        }
        iot(root->right,x,y);
       }
         bool isUnivalTree(TreeNode* root) {
        bool x=true;
        int y=root->val;
        iot(root,x,y);
        return x;
    
       
    }
};