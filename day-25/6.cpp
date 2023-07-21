	public:
	int fun(int nums[],int i,int prev_i,vector<vector<int>> &dp,int n)
   {
    if(i==n) return 0;
    if(dp[i][prev_i+1]!=-1) return dp[i][prev_i+1];
    int len=0+fun(nums,i+1,prev_i,dp,n);
    if(prev_i==-1 || nums[prev_i]<nums[i])  len=max(len,nums[i]+fun(nums,i+1,i,dp,n));
    return dp[i][prev_i+1]=len;
   }
	int maxSumIS(int nums[], int n)  
	{  
	    // Your code goes here
                vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
                return fun(nums,0,-1,dp,n);
                