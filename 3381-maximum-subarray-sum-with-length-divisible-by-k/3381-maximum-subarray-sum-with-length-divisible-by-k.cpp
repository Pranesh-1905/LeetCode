class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        long long maxx = LLONG_MIN;
        int n=nums.size();
        vector<long long> pre(n+1,0);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+nums[i];
        }
        vector<long long> minPre(k, LLONG_MAX);

        for(int i = k; i <= n; i++){
            int r = i % k;
            minPre[r] = min(minPre[r], pre[i - k]);

            long long candidate = pre[i] - minPre[r];
            maxx = max(maxx, candidate);
        }

        return maxx;
    }
};
