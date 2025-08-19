class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int water = 0;
        while(left < right){
            int minbar = min(height[left], height[right]);
            int currentwater = minbar * (right - left);
            water = max(water, currentwater);
            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return water;        
    }
};