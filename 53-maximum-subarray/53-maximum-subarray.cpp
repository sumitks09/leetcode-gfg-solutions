class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int cs=0;
        for(int i=0;i<nums.size();i++)
        {
           cs+=nums[i];
             maxi=max(maxi,cs);
            if(cs<0)
            {
                cs=0;
            }
           
        }
        return maxi;
    }
};