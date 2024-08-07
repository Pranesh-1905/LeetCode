class Solution {
public:
    bool canJump(vector<int>& nums) {
        int gas=0;
        for(int i:nums){
            if(gas<0){
                return false;
            }
            else if(i>gas){
                gas=i;
            }
            gas--;

        }
        return true;
    }
};