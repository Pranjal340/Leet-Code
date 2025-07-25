class Solution {
public:
    bool check(vector<int>& weights, int days, int capacity){
        int cnt = 1;
        int weightSum = 0;
        for(int i = 0; i < weights.size(); i++){
            if(weightSum + weights[i] > capacity){
                cnt++;
                weightSum = weights[i];
            }
        }
        return (cnt <= days);
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int res = 0;

        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(check(weights, days, mid)){
                res = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return res;
    }
};