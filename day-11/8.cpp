class Solution {
public:
 
 
   bool fun(vector<int> &arr,int cows,int diff)
   {
       int x=1,n=arr.size(),low=arr[0];
       for(int i=1;i<n;i++)
       {
           if(arr[i]-low>=diff)
           {
               x++;
               low=arr[i];
           }
           
       }
       if(x>=cows) return 1;
       return 0;
   }

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code hereal
        sort(stalls.begin(),stalls.end());
        int low=1,high=stalls[n-1];
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(fun(stalls,k,mid)==true) low=mid+1;
            else high=mid-1;
        }
        return high;
        
    