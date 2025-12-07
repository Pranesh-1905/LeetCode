class Solution {
public:
    vector<int> sortByReflection(vector<int>& nums) {
        vector<pair<long long,int>> v;
        for(auto i:nums){
            string s=bitset<32>(i).to_string();
            int p=s.find('1');
            if (p != string::npos)
                s = s.substr(p);
            reverse(s.begin(),s.end());

            long long b=stoll(s,nullptr,2);
            v.push_back({b,i});
        }
        sort(v.begin(),v.end());
        vector<int> ans;
        for(auto i:v){
            ans.push_back(i.second);
        }
        return ans;
    }
};