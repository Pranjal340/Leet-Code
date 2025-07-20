class Solution {
public:

    static bool compare(vector<int>& a, vector<int>& b) {
        return a[1] < b[1];
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int rem = 0;
        sort(intervals.begin(), intervals.end(), compare);
        int end = intervals[0][1];

        for(int i = 1; i < intervals.size(); i++){
            if(end > intervals[i][0]){
                rem++;
                // end = min(intervals[i][1], end);
            }
            else{
                end = intervals[i][1];
            }
        }
        return rem;        
    }
};