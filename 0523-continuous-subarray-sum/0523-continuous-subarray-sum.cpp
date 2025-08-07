class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int prefixMod = 0;
        unordered_map<int, int> modSeen;
        //This is done such that if the first value is divisible by k 
        // i.e. mod == 0 then it wont return true for that value as we need
        // the minimum subarray length to be at least 2.
        modSeen[0] = -1;
        //key is the mad value and value is the index

        for(int i = 0; i < nums.size(); i++){
            prefixMod = (prefixMod + nums[i]) % k;

            if(modSeen.find(prefixMod) != modSeen.end()){
                if(i - modSeen[prefixMod] > 1){
                    return 1;
                }
            }
            else{
                modSeen[prefixMod] = i;
            }
        }
        return 0;
    }
};