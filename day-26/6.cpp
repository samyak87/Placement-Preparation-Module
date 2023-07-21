class Solution {
public:
bool fun(string s,vector<string> &v,vector<int>&dp,int i1)
{
    if(s.length()==i1) return 1;
    if(dp[i1]!=-1) return dp[i1];
    for(int i=i1; i<s.size(); i++){
          vector<string>::iterator it;
    it = find(v.begin(),
                 v.end(), s.substr(i1, i+1-i1));
            if(it!=v.end() && fun(s,v,dp,i+1)){
                dp[i1]=1;
                return true;
            }
        }
        return dp[i1]=false;
    
}
    bool wordBreak(string s, vector<string>& v) {
        int n=s.length();
        vector<int> dp(n,-1);
        return fun(s,v,dp,0);
    }
};