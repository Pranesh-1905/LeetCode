class Solution {
public:
    string frequencySort(string s) {
        map<char,int> m1;
        for(auto i:s){
            m1[i]++;
        }
        vector<pair<int,char>> v;
        for(auto it : m1){
            v.push_back({it.second, it.first});
        }

        sort(v.begin(), v.end(), greater<>());
        string ans="";
        for(auto j:v){
            ans.append(j.first,j.second);
        }
        return ans;
    }
};