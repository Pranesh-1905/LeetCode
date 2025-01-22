class Solution {
    public int longestOnes(int[] nums, int k) {
        int left=0,maxlen=0,zcount=0;
        for(int right=0;right<nums.length;right++){
            if (nums[right]==0){
                zcount++;
            }
            while (zcount>k){
                if(nums[left]==0){
                    zcount--;
                }
                left++;
            }
            maxlen=Math.max(maxlen,right-left+1);
        }
        return maxlen;
    }
}