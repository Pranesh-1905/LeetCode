class Solution {
public:
    bool isIsomorphic(string s, string t) {
        set<char> s1(s.begin(),s.end());
        set<char> s2(t.begin(),t.end());
        set<pair<char, char>> pairs;
        for (int i = 0; i < s.size(); i++) {
            pairs.insert({s[i], t[i]});
        }
        return s1.size() == s2.size() && s2.size() == pairs.size();
    }
};