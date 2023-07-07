class Solution {
public:

    string getPermutation(int n, int k) {
        string ans;
         string s;
         int j=0;
         for(int i=1;i<=n;i++) s+=to_string(i);
         do {
       if(j==k-1) {ans=s; break;}
       j++;
    } while (next_permutation(s.begin(), s.end()));
       return ans;
    }
};