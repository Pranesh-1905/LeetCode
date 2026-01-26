class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector <int>>res;
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        do{
            s.insert(nums);

        }while(next_permutation(nums.begin(),nums.end()));
        for(auto i: s){
            res.push_back(i);
        }
        return res;
        
    }
};