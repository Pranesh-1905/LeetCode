class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //2ptr conc
        int l = 0;
        int r = 1;
        int maxpro = 0;

        while (r < prices.size()) {
            if (prices[l] < prices[r]) {
                int pro = prices[r] - prices[l];
                maxpro = max(pro, maxpro);
            } else {
                l = r;
            }
            r += 1;
        }
        return maxpro;
    }
};