class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int> arr(n*n+1,0);
        for (auto i: grid){
            for (auto j : i){
                arr[j]++;
            }
        }
        int a,b;
        a=-1;
        b=-1;
        for(auto i=1;i<=n*n;i++){
            if(arr[i]>1){
                a=i;
            }
            else if (arr[i]==0){
                b=i;
            }
        }
        return {a,b};
    }
};