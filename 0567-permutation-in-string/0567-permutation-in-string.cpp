class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // sort(s1.begin(),s1.end());
        // for(int i=0;i<s2.size();i++){
        //     for(int j=i;j<s2.size();j++){
        //         string s=s2.substr(i,j-i+1);
        //         sort(s.begin(),s.end());
        //         if(s==s1){
        //             return true;
        //         }
        //     }

        // }
        // return false;
        if(s1.size()>s2.size()) return false;
        vector<int> c1(26,0),c2(26,0);
        for(auto i :s1){
            c1[i-'a']++;
        }
        for(int i=0;i<s1.size();i++){//for 1st window
            c2[s2[i]-'a']++;
        }
        if(c1==c2) return true;
        for(int i=s1.size();i<s2.size();i++){
            c2[s2[i]-'a']++;
            c2[s2[i-s1.size()]-'a']--;
            if(c1==c2) return true;
        }
        return false;
    }
};