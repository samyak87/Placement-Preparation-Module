#include <bits/stdc++.h> 
void fun(stack<int> &st,int n)
{
	if(st.empty() || st.top()<n){
		st.push(n);
		return;
	}
	int num=st.top();
	st.pop();
	fun(st,n);
	st.push(num);
}
void sortStack(stack<int> &st)
{
	// Write your code here
	 if(st.empty()) return;
	 int n=st.top();
	 st.pop();
	 sortStack(st);
	 fun(st,n);

}