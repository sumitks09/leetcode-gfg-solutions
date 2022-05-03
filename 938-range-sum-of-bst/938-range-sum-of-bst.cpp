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
        int sum=0;
        private:
        int solve(TreeNode* root, int low, int high)
        {
          if(root)
          {
                 rangeSumBST(root->left,low,high);
                  
                 if(root->val>=low && root->val<=high)
                   {
                   sum+=root->val;
                   }
                  
              rangeSumBST(root->right,low,high);
          }
        return sum;    
        }
        
        
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
            if(root==nullptr)
                {
                        return 0;
                }
            
            return solve(root,low,high);
           
            
    }
};