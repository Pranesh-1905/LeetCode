class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int res=0;

        unordered_set<char> set;
        for(char c: s){
            set.insert(c);
        }
        for(char c: set){
            int st=s.find(c);
            int en=s.rfind(c);
            if(st<en){
            unordered_set<int> cha;
            for(int i =st+1;i<en;i++){
                cha.insert(s[i]);
            }
            res+=cha.size();
            }
        }
        return res;
    }
};