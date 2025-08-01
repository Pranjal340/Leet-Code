class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        
        for(int i = 1; i < intervals.size(); i++){
            vector<int>& curr = intervals[i];
            vector<int>& last = res.back();
            
            if(curr[0] <= last[1]){
                last[1] = max(last[1], curr[1]);
            }
            else{
                res.push_back(curr);
            }
        }
        return res;        
    }
};