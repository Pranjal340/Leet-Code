class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        vector<int> x = {arr[n/4], arr[n/2], arr[3 * n / 4]};
        int cnt = n / 4;

        for(int i : x){
            int left = lower_bound(arr.begin(), arr.end(), i) - arr.begin();
            int right = upper_bound(arr.begin(), arr.end(), i) - arr.begin() - 1;
            if(right - left + 1 > cnt){
                return i;
            }
        }
        return -1;
    }
};