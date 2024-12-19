class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> m;
        priority_queue<int> pq;
        int n=arr.size();
        for(int i : arr) m[i]++;
        for(auto i:m){
            pq.push(i.second);
        }
        int elements=0,setcount=0;
        while(!pq.empty()){
            elements+=pq.top();
            pq.pop();
            setcount++;
            if(elements>=n/2){
                return setcount;
            }
        }
        return setcount;
    }
};