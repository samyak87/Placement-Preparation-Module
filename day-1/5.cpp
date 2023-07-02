class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0,b=0,c=0;
        for(auto x : nums)
        {
            if(x==0) a++;
            if(x==1) b++;
            else if(x==2) c++;
        }
        nums.clear();
        for(int i=0;i<a;i++) nums.push_back(0);
                for(int i=0;i<b;i++) nums.push_back(1);
        for(int i=0;i<c;i++) nums.push_back(2);


    }
};