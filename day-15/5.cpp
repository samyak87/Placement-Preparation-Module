class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size=strs.size();
        string ans="";
        bool flag=1;
        for(int i=0;i<strs[0].size();i++)
        {
            if(flag){
          for(int j=1;j<strs.size();j++)
          {
             if(strs[0][i]!=strs[j][i])
             {
                 flag=0;
                 break;
              }
              
          }
            }
            if(flag) ans+=strs[0][i];
        }
        return ans;
    }
};