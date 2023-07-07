 vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        for(int i=0;i<(1<<N);i++)  // 2^n subsets
        {
            int sum=0;
            for(int j=0;j<N;j++)
            {
                if(i & (1<<j) ) sum+=arr[j];
            }
                            ans.push_back(sum);

        }
        return ans;
    }