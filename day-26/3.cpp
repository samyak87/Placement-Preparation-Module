class Solution {
public:

    bool canPartition(vector<int>& nums) {
        int sum=0,n=nums.size();
        for(auto x : nums) sum+=x;
        if(sum&1) return 0;
        sum/=2;
        vector<vector<bool>> dp(n+1,vector<bool>(sum+1,0));

        for(int i=0;i<=n;i++) dp[i][0]=1;
        dp[0][nums[0]]=1;                // if nums[0]==target
        

        for(int i=1;i<n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                  bool nontake=dp[i-1][j];
        bool take=0;
        if(j>=nums[i])
        {
            take=dp[i-1][j-nums[i]];
        }
        dp[i][j]=take | nontake;
            }
        }
        return dp[n-1][sum];

    }
};