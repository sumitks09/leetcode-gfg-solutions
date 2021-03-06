/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *};
 */

class Solution
{
    private:
        TreeNode* copyc(TreeNode *original, TreeNode *cloned, TreeNode *target,TreeNode * &ans) {
            if(cloned==nullptr)
            {
                    return nullptr;
            }
            
            if(cloned->val==target->val)
            {
                    ans=cloned;
                    return ans;
                    
            }
              copyc(original,cloned->left,target,ans);
              copyc(original,cloned->right,target,ans);
                return ans;
        }
    public:
        TreeNode* getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target) {
                 TreeNode* ans=nullptr;
                copyc(original,cloned,target,ans);
                return ans;
        }
};