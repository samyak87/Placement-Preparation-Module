class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int n=nums.size();
       int i=0,j=n-1;
       sort(nums.begin(),nums.end())
       while(i<j){
                if(nums[i]+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            else if(nums[i]+nums[j]>target) j--;
             else i++; 
        }
        return v;
    }
};