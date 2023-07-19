class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0,j=n-1;
        while(i<=j)
        {
            int mid=(i+j)/2;
                            if(target==nums[mid]) return mid;

            if(nums[i]<=nums[mid])
            {
                if(target>=nums[i] && target<=nums[mid])j=mid-1;
              else i=mid+1;

            }

        if(nums[mid]<nums[j])
        {
                if(target>=nums[mid] && target<=nums[j]) i=mid+1;
                else j=mid-1;
        }
        }
        return -1;
    }
};