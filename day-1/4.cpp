class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size=nums.size(),sum=0,max1=0;
        bool flag=0;
        for(auto x:nums){
            
            sum+=x;
            if(sum>0) flag=1;
            max1=max(max1,sum);
        if(sum<0) {sum=0;} }
        if(flag==0)
        {
            sort(nums.begin(),nums.end());
            return nums[size-1];
        }
        return max1;
    }
};