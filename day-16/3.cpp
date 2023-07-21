class Solution {
public:
    bool isAnagram(string s, string t) {
//         unordered_map<char,int> m1,m2;
//         for(auto x: s) m1[x]++;
//                 for(auto x: t) m2[x]++;
        
//         for(auto x: s){
// if(m1[x]!=m2[x]) return 0;}
//         return 1;
sort(s.begin(),s.end());
        sort(t.begin(),t.end());
 return s==t;
    }
};