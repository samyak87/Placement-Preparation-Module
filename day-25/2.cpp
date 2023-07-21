class Solution {
public:

// whatever at index prev_i we will store it at prev_i+1 bcz prev_i was starting from -1.

   int fun(vector<int> &nums,int i,int prev_i,vector<vector<int>> &dp)
   {
    if(i==nums.size()) return 0;
    if(dp[i][prev_i+1]!=-1) return dp[i][prev_i+1];
    int len=0+fun(nums,i+1,prev_i,dp);
    if(prev_i==-1 || nums[prev_i]<nums[i])  len=max(len,1+fun(nums,i+1,i,dp));
    return dp[i][prev_i+1]=len;
   }


    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
                vector<vector<int>> dp(n+1,vector<int>(n+1,0));

                for(int i=n-1;i>=0;i--)
                {
                    for(int prev_i=i-1;prev_i>=-1;prev_i--)
                    {
                    int len=0+dp[i+1][prev_i+1];
                    if(prev_i==-1 || nums[prev_i]<nums[i])  len=max(len,1+dp[i+1][i+1]);
                    dp[i][prev_i+1]=len;
                    }
                }
                return dp[0][-1+1];
    }
};