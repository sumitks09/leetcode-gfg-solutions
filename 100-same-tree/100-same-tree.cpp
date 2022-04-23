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
    bool isSameTree(TreeNode* p, TreeNode* q) {
            bool ans=false;
            bool ans2=false;
            if(p==nullptr&&q==nullptr)
            {
                    return true;
            }
            if(p!=nullptr && q==nullptr)
            {
                    return false;
            }
            if(p==nullptr && q!=nullptr)
            {
                    return false;
            }
            
           if(p->val==q->val)
           {
                 ans=isSameTree(p->left,q->left);
                 ans2=isSameTree(p->right,q->right);
           }
               return ans&&ans2;
            
            
    }
};