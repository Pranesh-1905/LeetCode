class Solution {
public:
    int findDuplicate(vector<int>& nums) {
          unordered_map<int,int> fre;
          for(int i:nums){
            fre[i]++;
          }
          for(int i:nums){
            if(fre[i]>1){
                return i;
            }
          }  
        	return -1;
    }
};