class Solution {
public:
    int minOperations(string s) {
        int cur1=0;
        for(int i=0;i<s.size();i++){
            if(i%2==0&&s[i]=='0'){
                cur1++;
            }
            else if(i%2!=0&&s[i]=='1'){
                cur1++;
            }
        }
        int cur2=0;
        for(int i=0;i<s.size();i++){
            if(i%2==0&&s[i]=='1'){
                cur2++;
            }
            else if(i%2!=0&&s[i]=='0'){
                cur2++;
            }
        }
        return min(cur1,cur2);
    }
};