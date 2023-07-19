 bool fun(vector<int> &arr,int students,int pages)
 {
     int cnt=0,sum=0;
     for(int i=0;i<arr.size();i++)
     {
         if(sum+arr[i]>pages) {
             sum=arr[i];
             cnt++;
                       if(sum>pages) return 0;

         }
         else sum+=arr[i];
     }
     if(cnt<=students-1) return 1;
     return 0;
 }
int Solution::books(vector<int> &A, int B) {
    if(B>A.size()) return -1;
    int low=INT_MAX,high=0;
    for(auto x: A)
    {
        low=min(low,x);
        high+=x;
    }
    
    while(low<=high)
    {
        int mid=(low+high)>>1;
        if(fun(A,B,mid)) high=mid-1;
        else low=mid+1;
    }
    return low;
}
