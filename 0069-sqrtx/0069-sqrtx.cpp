class Solution {
public:
    int mySqrt(int x) {
        long long i=0;
        long long a = static_cast<long long>(x);
        while(i*i <= a){
            i++;
        }
        return i-1;
    }
};