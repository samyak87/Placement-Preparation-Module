class Solution {
public:

    int fun(string &a,string &b,int i,int j,vector<vector<int>> &dp)
    {
        if(i<0) return j+1;
        if(j<0) return i+1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(a[i]==b[j]) return 0+fun(a,b,i-1,j-1,dp);
        
            return dp[i][j]=1+ min({fun(a,b,i,j-1,dp),fun(a,b,i-1,j-1,dp),fun(a,b,i-1,j,dp)});
        
    }
    int minDistance(string word1, string word2) {
        int n=word1.size(),m=word2.size();
     
     vector<int> prev(m+1,0),cur(m+1,0);
  for(int j=0;j<=m;j++) prev[j]=j;
        for(int i=1;i<=n;i++)
        {
            cur[0]=i;
            for(int j=1;j<=m;j++)
            {
                
                if(word1[i-1]==word2[j-1]) cur[j]=prev[j-1];
                else cur[j]=1+min({cur[j-1],prev[j-1],prev[j]});
            }
            prev=cur;
        }
        return prev[m];
    }
};