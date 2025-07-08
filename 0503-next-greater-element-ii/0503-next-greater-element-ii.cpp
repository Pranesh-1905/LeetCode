class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    int n=nums.size();
    vector<int> ans;
    for(int i=0;i<n;i++){
        int m=-1;
        for(int j=1;j<n;j++){
            int nxt=(i+j)%n;
               if(nums[i]<nums[nxt]){
                   m=nums[nxt];
                   break;
                   
               }
            }
        ans.push_back(m);
        }
        return ans;
        
    }
};