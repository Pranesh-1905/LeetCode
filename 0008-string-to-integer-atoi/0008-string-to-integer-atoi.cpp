class Solution {
public:
    int myAtoi(string s) {
        int sign=1;
        long long ans=0;

        int idx = 0;
        while (idx < s.size() && s[idx] == ' ') idx++;
        s = s.substr(idx);

        if (s[0]=='-') {
            sign=-1;
        }

        for(int i=0;i<s.size();i++){
            if(i==0 && (s[0]=='-' || s[0]=='+')){
                continue;
            }
            else if(isdigit(s[i])){
                ans = ans*10 + (s[i]-'0');

                if (sign == 1 && ans > INT_MAX) return INT_MAX;
                if (sign == -1 && -ans < INT_MIN) return INT_MIN;
            }
            else{
                break;
            }
        }

        return (int)(ans * sign);
    }
};
