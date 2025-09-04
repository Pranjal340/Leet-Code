class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeros = 0, index = -1;
        int prod = 1;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                zeros++;
                index = i;
            }
            else{
                prod *= nums[i];
            }
        }
        
        vector<int> res(nums.size(), 0);
        
        if(zeros == 0){
            for(int i = 0; i < nums.size(); i++){
                res[i] = prod / nums[i];
            }
        }
        else if(zeros == 1){
            res[index] = prod;
        }
        return res;        
    }
};