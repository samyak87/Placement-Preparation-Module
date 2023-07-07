class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<vector<int>> ans;
         vector<int> v;
        map<vector<int>,int> m;
        sort(nums.begin(),nums.end());
         int n=nums.size();
         
         for(int i=0;i<(1<<n);i++)
         {
            //  int sum=0;
             for(int j=0;j<n;j++)
             {
                if(i & (1<<j)) v.push_back(nums[j]);
             }
             if(m[v]<1){
             ans.push_back(v); m[v]++;}
             v.clear();
         }
         return ans;
    }
};