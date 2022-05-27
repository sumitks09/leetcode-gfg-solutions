class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int row=matrix.size();
            int col=matrix[0].size();
        int r=0;
            int c=col-1;
            while(r<row&&r>=0 && c<col&&c>=0)
            {
                    if(target==matrix[r][c])
                    {
                            return true;
                    }
                    else if(target<matrix[r][c])
                    {
                            c--;
                    }
                    else
                    {
                    r++;
            }
            }
            return false;
    }
};