class Solution {
public:

bool isPalindrome(string s,int i,int j)
{
  while(i<j)
  {
      if(s[i++]!=s[j--]) return 0;
  }
  return 1;
}

void fun(int index,vector<string> &v,vector<vector<string>>&ans,string &s)
{
   if(index==s.size())
   {
       ans.push_back(v);
       return;
   }

   for(int i=index;i<s.size();i++)
   {
       if(isPalindrome(s,index,i))
       {
         v.push_back(s.substr(index,i-index+1));
         fun(i+1,v,ans,s);
         v.pop_back();
       }
   }
}


    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> v;
        fun(0,v,ans,s);
        return ans;
    }
};