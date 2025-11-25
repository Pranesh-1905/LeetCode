class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxx = nums[0];

        int temp = 1;
        // left → right 
        for (int i : nums) {
            temp *= i;
            maxx = max(maxx, temp);
            if (temp == 0) temp = 1;   
        }

        temp = 1;
        // right → left 
        for (int i = nums.size() - 1; i >= 0; i--) {
            temp *= nums[i];
            maxx = max(maxx, temp);
            if (temp == 0) temp = 1;  
        }

        return maxx;
    }
};
