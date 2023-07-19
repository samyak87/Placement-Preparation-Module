  // Optimized Using: Two Pointer with Extra Space
  // Time Complexity: O(m+n)
  // Space Complexity: O(m+n)
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        // Create a single sorted by merging two sorted arrays
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0;
        int j=0;
        int a=-1,b=-1;
        int x=n1+n2;
        if(x&1) a=1;
        else b=1;
        int p=(n1+n2)/2;
        int sum=0;
        int g;
        while(i<n1 && j<n2)
        {                    sum++;


                    int g;
          if(nums1[i]<nums2[j]) {g=nums1[i]; i++;}
          else {g=nums2[j]; j++;}
          if(sum==p+1 && a==1)
          {
              return (double)(g);
          }
          else if(sum==p && b==1)
          {
              int b1=0;
            if(i>=n1) b1=g+nums2[j];
            else if(j>=n2) b1=g+nums1[i];
            else
              b1=g+min(nums1[i],nums2[j]);
              return (double)(b1/2);
          }


        }
       
       return double(33);

    }
};

