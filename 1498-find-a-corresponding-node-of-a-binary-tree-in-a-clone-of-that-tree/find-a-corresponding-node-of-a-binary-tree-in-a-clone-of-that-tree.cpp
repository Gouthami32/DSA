/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
 
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        int val=target->val;
        queue<TreeNode*>q;
        q.push(cloned);
        while(!q.empty()){
            TreeNode* del=q.front();
            if(del->val==val){
                  return del;
            }
           q.pop();
        if(del->left!=NULL)
        q.push(del->left);
        if(del->right!=NULL)
        q.push(del->right);


        }
        return NULL;
       
        
        
    }
};