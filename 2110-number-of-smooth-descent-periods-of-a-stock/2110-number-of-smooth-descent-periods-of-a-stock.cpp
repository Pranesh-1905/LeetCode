class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans=prices.size();

        if(ans==1){
            return ans;
        }
        int temp=0;
        for(auto i=0;i<prices.size()-1;i++){
            if(prices[i]-prices[i+1]==1){
                temp++;
            }
            else{
                ans+=(long long) temp*(temp+1)/2;
                temp=0;
            }
        }
        ans+=(long long) temp*(temp+1)/2;
        return ans;
    }
};