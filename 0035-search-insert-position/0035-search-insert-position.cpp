class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0, j = n - 1;

        while(i <= j){
            if(target > nums[j]){
                return j + 1;
                
            }
            else if(target <= nums[i]){
                return i;
            }
            i++;
            j--;
        }
        return i;
    }
};