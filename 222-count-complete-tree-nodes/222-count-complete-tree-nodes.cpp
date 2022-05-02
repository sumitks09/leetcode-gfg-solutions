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
        private:
        void solve(vector<int>&ans,TreeNode* root)
        {
                if(root==nullptr)
                {
                        return;
                }
                solve(ans,root->left);
                ans.push_back(root->val);
                solve(ans,root->right);
        }
public:
    int countNodes(TreeNode* root) {
        vector<int>ans;
            solve(ans,root);
            sort(ans.begin(),ans.end());
            return ans.size();
    }
};