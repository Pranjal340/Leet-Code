class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int res = 0;
        sort(nums.begin(), nums.end());
        
        for(int i = 2; i < nums.size(); i++){
            int left = 0, right = i - 1;
            
            while(left < right){
                if(nums[left] + nums[right] > nums[i]){
                    res += right - left;
                    
        // all elements from nums[left] to nums[right - 1]will form valid triangles with 
        // nums[right] and nums[i](largest side)we must still check for lesser right   
        
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return res;
    }        
};