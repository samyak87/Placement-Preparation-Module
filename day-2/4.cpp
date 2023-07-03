class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // brute force
        
        //    unordered_map<int,int> m;
        // for(auto x: nums) m[x]++;
        //  for(auto x: m){
        //      if(x.second>1) return x.first;
        //  }
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1]) return nums[i];
        }
        
        return 0;
    }
};