class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>m;
        vector<int> v;
        for (auto i:arr){
            m[i]++;
        }
        for(auto i : m){
            if (i.first==i.second){
                v.push_back(i.first);
            }
        }
         return v.empty() ? -1 : *max_element(v.begin(), v.end());

    }
};