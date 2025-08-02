class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSum;
        
        int res = 0;
        int currentSum = 0;
        
        for(int i = 0; i < nums.size(); i++){
            
            currentSum += nums[i];
            
            if(currentSum == k){
                res++;
            }
            if(prefixSum.find(currentSum - k) != prefixSum.end()){
                res += prefixSum[currentSum - k];
            }
            
            prefixSum[currentSum]++;
        }
        return res;        
    }
};