class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // brute
        // int n=nums2.size();
        // vector<int> ans;
        // for(auto x : nums1)
        // {
        //    for(int i=0;i<n;i++)
        //    {
        //        bool flag=0;
        //         if(nums2[i]==x)
        //         {

        //             for(int j=i+1;j<n;j++)
        //             {
        //                 if(nums2[j]>x){
        //                     flag=1;
        //                     ans.push_back(nums2[j]);
        //                     break;
        //                 }
        //             }
        //             if(flag==0) ans.push_back(-1);
        //             break;
        //         }
        //    }
        // }
        // return ans;


        int n=nums1.size(),m=nums2.size();
        stack<int> st;
        unordered_map<int,int> mp;
        for(int i=m-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]) st.pop();
            if(st.empty()) mp[nums2[i]]=-1;
            else mp[nums2[i]]=st.top();
            st.push(nums2[i]);
        }
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            ans[i]=mp[nums1[i]];
        }
        return ans;
  
    }
};