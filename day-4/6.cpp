class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==1) return 1;
        vector<int> m(256,-1);
        int ans=0,start=-1;
        for(int i=0;i<s.size();i++)
        {
           if(m[s[i]]>start){start=m[s[i]]; }
           m[s[i]]=i;
ans=max(ans,i-start);
        }
        return ans;
    }
};