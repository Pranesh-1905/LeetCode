class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int>v;
        for(auto i:nums){
            if(i>=0){
                v.push_back(i);
            }
        }
        if(v.size() == 0) return nums;

        vector<int> rot(v.size());
        k=k%v.size();
        for(int i=0;i<v.size();i++){
            rot[i]=v[(i+k)%v.size()];
        }
        int j=0;
        for (int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                nums[i]=rot[j++];
            }
        }
        return nums;
    }
};