class Solution {
public:
    int minSwaps(string s) {
        int n = s.size();
        if (n % 2 != 0) return -1;

        stack<char> st;
        for (char i : s) {
            if (i == '[') {
                st.push(i);
            } else {
                if (!st.empty() && st.top() == '[') {
                    st.pop();
                } else {
                    st.push(i);
                }
            }
        }

        int op = 0, tot = st.size();
        while (!st.empty()) {
            if (st.top() == '[') op++;
            st.pop();
        }
        int cl = tot - op;

        return (cl + 1) / 2;
    }
};
