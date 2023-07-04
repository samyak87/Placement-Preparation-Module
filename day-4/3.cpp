class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        if(nums.size()==0) return 0;
      int max1=1,ans=1;
      for(int i=1;i<nums.size();i++)
      {
          if(nums[i]-nums[i-1]==1) {
              ans++;
              max1=max(max1,ans);
          }

          else if(nums[i]==nums[i-1]) continue;
          else ans=1;
      }
        return max1;
    }
};