class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int min = 0;
        int pro = 0;

        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] < prices[min])
                min = i;

            if(prices[i] > prices[max] || min > max)
                max = i;

            if(prices[max] - prices[min] > pro)
                pro = prices[max] - prices[min];
        }

        return pro;
    }
};