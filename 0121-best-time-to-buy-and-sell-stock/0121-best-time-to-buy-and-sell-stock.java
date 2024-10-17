class Solution {
    public int maxProfit(int[] prices) {
        int l=0;
        int r=1;
        int mpro=0;
        while(r<prices.length){
            if(prices[l]<prices[r]){
                int p=prices[r]-prices[l];
                mpro=Math.max(mpro,p);

            }
            else{
                l=r;
            }
            r++;
        
        }
        return mpro;
    }
}