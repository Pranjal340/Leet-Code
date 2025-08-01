class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>count;
        
        vector<int> res;
        // Count frequency of each number in nums1
        for(int num : nums1){
            count[num]++;
        }
        
        for(int i = 0 ; i< nums2.size(); i++){
            if(count[nums2[i]] > 0){
                res.push_back(nums2[i]);
                count[nums2[i]]--;
            }
        }
        return res;         
    }
};