vector<int> Solution::prevSmaller(vector<int> &A) {
    int n=A.size();
    stack<int> st;
    st.push(A[0]);
    vector<int> ans;
    ans.push_back(-1);
    for(int i=1;i<n;i++)
    {
       while(!st.empty() && st.top()>=A[i]) st.pop();
       if(st.empty()) ans.push_back(-1);
       else ans.push_back(st.top());
       st.push(A[i]);

    }
    return ans;
}
