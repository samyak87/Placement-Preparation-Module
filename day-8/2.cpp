class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max1=0;
        int ones=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1){
                ones++;
                max1=max(max1,ones);
            }
            else ones=0;
        }
        return max1;
    }
};