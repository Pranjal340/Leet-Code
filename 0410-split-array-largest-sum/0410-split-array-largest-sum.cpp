class Solution {
public:
    bool check(vector<int> &arr, int k, int pageLimit){
        int cnt = 1;
        int pageSum = 0;
        for(int i = 0; i < arr.size(); i++){
            if(pageSum + arr[i] > pageLimit){
                cnt++;
                pageSum = arr[i];
            }
            else{
                pageSum += arr[i];
            }
        }
        return cnt <= k;
    }
    int splitArray(vector<int>& nums, int k) {

        int res = 0;
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        
        while(low <= high){
            int mid = low + (high - low) / 2;
            
            if(check(nums, k, mid)){
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