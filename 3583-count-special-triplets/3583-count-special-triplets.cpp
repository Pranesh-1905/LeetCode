class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        int mod=1e9+7;
        map<int,int> suf;
        map<int,int>pre;
        for(auto i:nums){
            suf[i]++;
        }
        long long ans=0;
        for(auto i:nums){
            suf[i]--;
            ans+=(long long)pre[i*2]*suf[i*2];
            pre[i]++;
        }
        return ans%mod;
    }
};