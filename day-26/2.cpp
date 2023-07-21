class Solution 
{
public:
int count(vector<int>&coins, int amount, int n,vector<vector<int>>&dp)
{
        if(amount==0) return 0;
        if(n==0 && amount>0) return INT_MAX-1;
        if(dp[n][amount]!=-1) return dp[n][amount];
        int res=0;
        if(amount>=coins[n-1])
        {
            int take=1+count(coins, amount-coins[n-1], n,dp);
            int dontTake=count(coins, amount, n-1,dp);
            res=min(take, dontTake);
        }
        else
        {
            res=count(coins, amount, n-1,dp);
        } 
        return dp[n][amount]= res;
}
    int coinChange(vector<int>& coins, int amount)
    {
        if(amount == 0) return 0;
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
        int res= count(coins, amount, n,dp);
        if(res==INT_MAX-1) return -1;
        else return res;
    }
};