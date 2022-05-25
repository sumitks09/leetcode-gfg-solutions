/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
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
class Solution {
        private:
         TreeNode* sorted(vector<int>& ans,int start,int end)
         {
                 if(start>end)
                 {
                         return nullptr;
                 }
                 
          
            int mid=(start+end)/2;
              TreeNode* root=new TreeNode(ans[mid]);
                 root->left=sorted(ans,start,mid-1);
                 root->right=sorted(ans,mid+1,end);
                 return root;
                 
         }
        
public:
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>ans;
            while(head!=nullptr)
            {
                    ans.push_back(head->val);
                    head=head->next;
            }
            int i=0;
            int j=ans.size()-1;
            return sorted(ans,i,j);
           
            
            
    }
};