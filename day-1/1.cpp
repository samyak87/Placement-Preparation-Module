class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> s1,s2;
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0){
                    s1.insert(i);
                    s2.insert(j);
                }
            }
        }
        for(auto x : s1)
        {
          for(int i=0;i<m;i++) matrix[x][i]=0;
        }
         for(auto x : s2)
        {
          for(int i=0;i<n;i++) matrix[i][x]=0;
        }

    }
};