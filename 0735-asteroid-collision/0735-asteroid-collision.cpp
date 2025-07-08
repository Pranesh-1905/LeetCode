
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        for(int a: asteroids){
            while(!st.empty()&&a<0 && st.back()>0){
                int dif=a+st.back();
                if(dif>0){
                    a=0;
                }
                else if(dif<0){
                    st.pop_back();

                }
                else{
                    a=0;
                    st.pop_back();
                }
            }
            if(a!=0){
                st.push_back(a);
            }
        }
            return st;
    }
};