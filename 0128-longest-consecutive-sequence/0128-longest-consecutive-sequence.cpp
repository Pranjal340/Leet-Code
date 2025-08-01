class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        
        int res = 0;
        
        for(int val : nums ){
            
            if( set.find(val - 1) == set.end()){
                
                int current = val, cnt = 0;
                while(set.find(current) != set.end()){
                    set.erase(current);
                    current++;
                    cnt++;
                }
                res = max(res, cnt);
            } 
        }
        return res;        
    }
};