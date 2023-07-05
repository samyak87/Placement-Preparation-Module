class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
       int cnt=0;
       for(int i=1;i<n;i++)
       {
           if(nums[i]!=nums[i-1]){
               nums[cnt+1]=nums[i];
               cnt++;
           }
       }
       return cnt+1;
    }
};