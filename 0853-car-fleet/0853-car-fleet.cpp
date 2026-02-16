class Solution {
public:
    //hint: time=tar-pos[i]/speed[i]
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>p;
        for (int i=0;i<position.size();i++){
            {
                p.push_back({position[i],speed[i]});
            }
        }
        sort(p.begin(), p.end(), greater<pair<int,int>>());
        stack<double> s;
        for (auto &i: p){
            int pos=i.first;
            int spe=i.second;
            double time=double(target-pos)/spe;
            if(s.empty()||s.top()<time){
                s.push(time);
            }

        }
        return s.size();
    }
};