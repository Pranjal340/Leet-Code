class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> sa(nums1.begin(), nums1.end());
        
        vector<int> res;
        
        for(int i = 0 ; i< nums2.size(); i++){
            if(sa.find(nums2[i]) != sa.end()){
                res.push_back(nums2[i]);
                sa.erase(nums2[i]);
            }
        }
        return res;        
    }
};