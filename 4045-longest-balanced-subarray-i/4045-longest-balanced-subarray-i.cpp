class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int maxi=0;
        unordered_set<int>even,odd;
        for (auto i=0;i<nums.size();i++){
            odd.clear();
            even.clear();
            for (int j=i;j<nums.size();j++){
                if(nums[j]%2==0){
                    even.insert(nums[j]);
                }
                else{
                    odd.insert(nums[j]);
                }
                if(odd.size()==even.size()){
                    maxi=max(maxi,j-i+1);
                }

            }
        }
        return maxi;
    }
};