class Solution
{
    public:
        vector<vector < int>> threeSum(vector<int> &nums)
        {

            vector<vector < int>> result;
            if (nums.size() <=1)
            {
                return result;
            }
            sort(nums.begin(), nums.end());
            for (int i = 0; i < nums.size() - 2; i++)
            {
                if (i == 0 || i > 0 && nums[i] != nums[i - 1])
                {
                    int low = i + 1;
                    int high = nums.size() - 1;
                    int sum = 0 - nums[i];
                    while (low < high)
                    {
                        if (nums[low] + nums[high] == sum)
                        {
                            vector<int> ans;
                            ans.push_back(nums[i]);
                            ans.push_back(nums[low]);
                            ans.push_back(nums[high]);
                            result.push_back(ans);
                            while (low < high && nums[low] == nums[low + 1]) low++;
                            while (low < high && nums[high] == nums[high - 1]) high--;
                            low++;
                            high--;
                        }
                        else if (nums[low] + nums[high] < sum)
                        {
                            low++;
                        }
                        else
                        {
                            high--;
                        }
                    }
                }
            }
            return result;
        }
};