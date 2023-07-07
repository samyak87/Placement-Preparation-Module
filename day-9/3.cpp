class Solution {
public:
      void fun(int i,vector<int> &c,int target,vector<int> &v,vector<vector<int>> &ans)
      {
          if(i==c.size())
          {
              if(target==0)
              {
                  ans.push_back(v);
              }
                                return;

          }

          if(c[i]<=target)
          {
              v.push_back(c[i]);
              fun(i,c,target-c[i],v,ans);
              v.pop_back();
          }
          fun(i+1,c,target,v,ans);
      }
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        fun(0,c,target,v,ans);
        return ans;
    }
};