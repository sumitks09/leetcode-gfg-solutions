class Solution {
public:
    int dominantIndex(vector<int>& nums) {
            
            if(nums.size()==1)
            {
                    return 0;
            }
            
        int largest=INT_MIN;
           
            for(int i=0;i<nums.size();i++)
            {
                    largest=max(largest,nums[i]);
            }
        
           int index=max_element(nums.begin(), nums.end()) - nums.begin();
            
           
            for(int i=0;i<nums.size();i++)
            {
                    if(nums[i]==largest)
                    {
                            continue;
                    }
                    if(nums[i]*2>largest)
                    {
                       index=-1;        
                            
                    }
            }
           return index;
    }
};