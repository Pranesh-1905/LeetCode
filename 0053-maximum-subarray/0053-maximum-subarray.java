class Solution {
    public int maxSubArray(int[] nums) {
        int res=nums[0];
        int a=0;
        for(int i:nums){
            if (a<0){
                a=0;
            }
            a+=i;
            res=Math.max(res,a);
        }
        return res;
    }
}