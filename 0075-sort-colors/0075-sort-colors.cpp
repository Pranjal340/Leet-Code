class Solution {
public:

    void swap (int &a , int &b){
        int t = a;
        a = b;
        b = t;
    }


    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0 , mid = 0 , high = n - 1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 2){
                swap(nums[mid], nums[high]);
                high--;
                // do not increment as the new element at mid index may be neede to be processed again
            }
            else{

                mid++;
            }
        }
    }
};