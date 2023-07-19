class Solution {
public:
    // custom comparator
   // static bool cmp(pair<int,int> a,pair<int,int> b){ return a.second>b.second;}
   
    vector<int> topKFrequent(vector<int>& nums, int k) {
         vector<int> ans;
         unordered_map<int,int> m;
         vector<pair<int,int>> v;
         for(auto x : nums) m[x]++;
         for(auto x : m) v.push_back({x.second,x.first});
         sort(v.begin(),v.end());
         for(auto x :v) ans.push_back(x.second);
        reverse(ans.begin(),ans.end());
        while(ans.size()!=k) ans.pop_back();
        return ans;
    }
    
};