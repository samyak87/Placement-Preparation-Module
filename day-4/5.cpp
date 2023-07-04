int Solution::solve(vector<int> &A, int k) {
     unordered_map<int,int> m;
        int ans=0;
        int max1=0,cnt=0;
        m[0]++;
        
        for(int i=0;i<A.size();i++)
        {
            ans^=A[i];
           int x=ans^k;
           cnt+=m[x];
           m[ans]++;
                       
        }
        return cnt;
}
