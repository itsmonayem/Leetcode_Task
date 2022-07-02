class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int len=prices.size();
        int mn=prices[0];
        for(int i=1;i<len;i++){
            if(prices[i]<prices[i-1]){
                profit+=prices[i-1]-mn;
                mn=prices[i];
            }
        }
        if(prices[len-1]>mn)
            profit+=prices[len-1]-mn;
        return profit;
    }
};
