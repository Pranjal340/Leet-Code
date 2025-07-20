class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        bool inserted = false;
        int n = intervals.size();
        for(int i = 0; i < n; i++){
            if(intervals[i][0] > newInterval[0]){
                intervals.insert(intervals.begin() + i, newInterval);
                inserted = true;
                break;
            }
        }
        if(!inserted){
            intervals.push_back(newInterval);
        }
        
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