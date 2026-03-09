class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        for(int i=0;i<arr.size()-1;i++){
            int maxx=INT_MIN;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]>maxx){
                    maxx=arr[j];
                }
            }
            ans.push_back(maxx);
        }
        ans.push_back(-1);
        return ans;
    }
};