class Solution {
public:
    void rotate(vector<vector<int>>& s) {
       int n=s.size();

      for(int i=0;i<n;i++)
      {
          for(int j=0;j<i;j++) swap(s[i][j],s[j][i]);
      }
      for(int i=0;i<n;i++)
      {
          reverse(s[i].begin(),s[i].end());
      }
       
        



    }
};