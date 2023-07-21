  int fun(int i,int W,int wt[],int val[],int n,vector<vector<int>>&dp)
    {
        if(i>=n || W<=0)  return 0;
        if(dp[i][W]!=-1) return dp[i][W];
        int pick=0;
        if(wt[i]<=W)
        pick=val[i]+fun(i+1,W-wt[i],wt,val,n,dp);
        int nonpick=fun(i+1,W,wt,val,n,dp);
        
        return dp[i][W]= max(pick,nonpick);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<int> dp(W+1,0);
       
       for(int i=1;i<=n;i++)
       {
           for(int j=0;j<=W;j++)
           {
               if(wt[i-1]<=j) dp[j]=max(dp[j],val[i-1]+dp[j-wt[i-1]]); 
            
           }
       }
       return dp[W];
    }