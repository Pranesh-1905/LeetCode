class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        ans.push_back({1});
        for(int i=1;i<=rowIndex;i++){
            vector<int> v={0};
            v.insert(v.end(),ans.back().begin(),ans.back().end());
            v.push_back(0);
            vector<int> arr;
            for(int j=0;j<v.size()-1;j++){
                arr.push_back(v[j]+v[j+1]);
            }
            ans.push_back(arr);
        }
        return ans[rowIndex];
    }
};