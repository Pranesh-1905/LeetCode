class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        int mod=1000000007;
        int f=complexity[0];
        int n=complexity.size();
        for(int i=1;i<n;i++){
            if(f>=complexity[i]){
                return 0;
            }
        }
        long long fact=1;
        for(int i=2;i<n;i++){
            fact=(fact*i)%mod;
        }
        return int(fact);

    }
};