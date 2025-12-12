class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> pre;
        pre.push_back(nums[0]);
        for(int i=1;i<n;i++){
            pre.push_back(nums[i]+pre[i-1]);
        }
        map<int,int> m;
        int a=0;
        for(int i=0;i<n;i++){
            if(pre[i]==k){
                a++;
            }
            if(m.find(pre[i]-k)!=m.end()){
                a+=m[pre[i]-k];
            }
            m[pre[i]]++;

        }
        return a;
    }
};