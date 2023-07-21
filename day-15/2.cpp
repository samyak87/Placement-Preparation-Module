class Solution {
public:
   bool fun(string &s,int i,int j, vector<vector<int>> &dp)
   {
      if(i>=j) return 1;
      if(dp[i][j]!=-1) return dp[i][j];
      if(s[i]!=s[j]) return 0;
      else dp[i][j]=fun(s,i+1,j-1,dp);
      return dp[i][j];
   }

    string longestPalindrome(string s) 
    {
        vector<vector<int>>dp(s.length()+1,vector<int>(s.length()+1,-1));
        string ans;
        int len=0,n=s.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(fun(s,i,j,dp) && j-i+1>len )
                {
                    len=j-i+1;
                    ans=s.substr(i,j-i+1);
                }
            }
        }
        return ans;
    }
};