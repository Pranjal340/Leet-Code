class Solution {
public:
    bool check(vector<int>& nums) {
        int test = 0;
        int n = nums.size();
        for(int i = 0 ; i < n - 1 ;i++){
            if(nums[i] > nums[i+1]){
                test++;
            }
        }
        if(nums[0] < nums[n-1]){
            test++;
        }
        if(test < 2){
            return true;
        }
        return false;
    }
};