class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0, res1 = nums[0], totalSum = 0, mini = 0, res2 = nums[0];
        for(int i = 0; i < n; i++){
            totalSum += nums[i];
            
            maxi = max(maxi + nums[i], nums[i]);
            res1 = max(maxi, res1);
            
            mini = min(mini + nums[i], nums[i]);
            res2 = min(mini, res2);
        }
        //This line is very important
        if(res2 == totalSum){
            return res1;
        }

        return max(res1, totalSum - res2);        
    }
};