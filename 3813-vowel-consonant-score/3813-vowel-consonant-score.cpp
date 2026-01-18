class Solution {
public:
    int vowelConsonantScore(string s) {
        int v=0,c=0;
        for(auto i:s){
            if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'){
                v++;
            }
            else if(isalpha(i)){
                c++;
            }
        }
        if (c>0)
        return floor(v/c);
        else
        return 0;
    }
};