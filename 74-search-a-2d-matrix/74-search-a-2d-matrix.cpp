class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
              if(!matrix.size()) return false;
           
        int low=0;
            int high=(matrix.size()*matrix[0].size())-1;
           
            while(low<=high)
            {
                     int mid=low+(high-low)/2;
                    if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]==target)
                    {
                            return true;
                    }
                    else if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]<target)
                    {
                            low=mid+1;
                    }
                    else
                    {
                            high=mid-1;
                    }
            }
            return false;
    }
};