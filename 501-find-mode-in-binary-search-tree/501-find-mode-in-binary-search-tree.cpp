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
                
            ans.push_back(root->val);
            
            if(root->left!=nullptr)
            {
                   
                solve(ans,root->left);    
            }
            if(root->right!=nullptr)
            {
                    
                 solve(ans,root->right);
            }
        
        }
public:
    vector<int> findMode(TreeNode* root) {
            vector<int>ans;
            vector<int>ans1;
             solve(ans,root);
            if(ans.size()==1)
            {
                    ans1.push_back(ans[0]);
            }
unordered_map<int,int>memo;
            for(auto x:ans)
            {
                    memo[x]++;
            }
            
            
            int max = -1;
   
    
    for(auto i : memo)
    {
        if(max < i.second)
        {
            ans1.clear();
            max = i.second;
            ans1.push_back(i.first);
        }
        else if(max == i.second)
            ans1.push_back(i.first);            
    }
            
                    return ans1;
    }
};