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
        TreeNode* solve(vector<int>& nums,int start,int end)
        {
                if(start>end)
                {
                        return nullptr;
                }
                int mid=(start+end)/2;
                TreeNode* root=new TreeNode(nums[mid]);
                root->left=solve(nums,start,mid-1);
                root->right=solve(nums,mid+1,end);
                return root;
        }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int start=0;
            int end=nums.size()-1;
           TreeNode* root=solve(nums,start,end);
            return root;
    }
};