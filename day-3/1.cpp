class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int j=n;
        for(int i=0;i<n;i++)
        {
            if(matrix[i][0]<=target && matrix[i][m-1]>=target){
                j=i;
                break;
            }
        }

        if(j==n) return 0;
        for(int i=0;i<m;i++)
        {
            if(matrix[j][i]==target) return 1;
        }
        return 0;
    }
};