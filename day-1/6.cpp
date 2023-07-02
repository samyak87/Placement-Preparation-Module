class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size(),max1=0,min=prices[0];
        for(int i=1;i<size;i++)
        {
            if(prices[i]<min) min=prices[i];
            max1=max(max1,prices[i]-min);
        }
        return max1;
    }
};  