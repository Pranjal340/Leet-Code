class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      // Dont use hash Table as cant handle Duplicates
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            
            int j = i + 1;
            int k = nums.size() - 1;

            while(j < k){
                int total = nums[i] + nums[j] + nums[k];

                if(total < 0){
                    j++;
                }
                else if(total > 0){
                    k--;
                }
                else{
                    ans.push_back({nums[i], nums[j], nums[k]});

                    while (j < k && nums[j] == nums[j + 1]) j++;
                    while (j < k && nums[k] == nums[k - 1]) k--;

                    j++;
                    k--;

                }
            }
        }
        return ans;
    }
};