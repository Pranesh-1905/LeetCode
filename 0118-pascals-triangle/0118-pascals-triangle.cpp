class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if(numRows<=0){
            return res;
        }
        res.push_back({1});
        for(int i=1;i<numRows;i++){
            vector<int> tem={0};
            tem.insert(tem.end(),res.back().begin(), res.back().end());
            tem.push_back(0);
            vector<int> v;
            for (int j = 0; j < tem.size() - 1; j++){
                v.push_back(tem[j]+tem[j+1]);
            }
            res.push_back(v);

        }
        return res;

    }
};