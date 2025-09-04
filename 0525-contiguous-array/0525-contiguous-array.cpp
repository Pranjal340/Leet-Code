class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        
        int preSum = 0, res = 0;
        
        for(int i = 0; i < nums.size(); i++){
            
            preSum += (nums[i] == 0 ? -1 : 1);
            
            if(preSum == 0){
                res = i + 1;
            }
            else if(mp.find(preSum) != mp.end()){
                res = max(res, i - mp[preSum]);
            }
            if(mp.find(preSum) == mp.end()){
                mp[preSum] = i;
            }
            
        }
        return res;        
    }
};