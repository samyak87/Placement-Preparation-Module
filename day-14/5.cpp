class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> v;
        multiset<int> pq;
        for(int i=0;i<k;i++)
        {
            pq.insert(nums[i]);
        }
        v.push_back(*--pq.end());
        for(int i=k;i<nums.size();i++)
        {
            pq.insert(nums[i]);
            pq.erase(pq.find(nums[i-k]));
                    v.push_back(*--pq.end());

        }
        return v;
    }
};