class Solution {
public:
    string countAndSay(int n) {
        string res="1";
        for(int i=0;i<n-1;i++){
            string temp="";
            int j=0;
            while(j<res.size()){
                int c=1;
                while((j+1<res.size())&&(res[j]==res[j+1])){
                    c++;
                    j++;
                }
                temp+=to_string(c)+res[j];
                j++;
            }
            res=temp;
        }
        return res;
    }
};  