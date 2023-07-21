class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // multiset<int> s;
        // sort(nums.begin(),nums.end());
  //       for(auto x: nums) s.insert(x);
  //       int size=s.size();
  //       int i=0;
  //      for(auto& str: s)
  // {
  //    if(i==size-k) return str;
  //          i++;
  // }
        
        //     sort(nums.begin(),nums.end());
        // return nums[nums.size()-k];
        // // return -1;
        
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto x:nums) { pq.push(x); if(pq.size()>k) pq.pop();}
        return pq.top();
    }
};