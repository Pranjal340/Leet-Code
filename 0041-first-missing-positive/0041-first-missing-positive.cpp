class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int num = 1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == num){
                num++;
            }
             else if(nums[i] > num){
                break;
            }
        }
        return num;        
    }
};