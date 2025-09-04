class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int prefixSum = 0, total = 0;
        
        for(int ele : nums){
            total += ele;
        }
        
        for(int pivot = 0; pivot < nums.size(); pivot++){
            int suffixSum = total - prefixSum - nums[pivot];
            if(prefixSum == suffixSum){
                return pivot;
            }
            prefixSum += nums[pivot];
        }
        
        return -1;        
    }
};