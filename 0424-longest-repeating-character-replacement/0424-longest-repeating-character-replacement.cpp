class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int res = 0;
        int maxf = 0;
        map<char, int> counter;

        for (int r = 0; r < s.size(); r++) {
            counter[s[r]]++;
            maxf = max(maxf, counter[s[r]]);

            while ((r - l + 1) - maxf > k) {
                counter[s[l]]--;
                l++;
            }

            res = max(res, r - l + 1);
        }

        return res;
    }
};
