class Solution {
public:
    string convert(string s, int numRows) {
         if (numRows == 1) return s; 
        vector<string> v(numRows,"");
        int ind=0;
        int sign =-1;
        for(int i=0;i<s.size();i++){
            if(ind==0 ||ind==numRows-1){
                sign*=-1;
            }
            v[ind]+=s[i];
            if(sign==1) ind++;
            else 
            ind--;

        }
        string res;
        for(auto i: v){
            res+=i;
        }
        return res;
    }
};