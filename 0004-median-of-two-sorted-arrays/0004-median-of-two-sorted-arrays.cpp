class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        if(n > m){
            return findMedianSortedArrays(nums2, nums1);
        }

        int left = (n + m + 1) / 2; // Calculate the left partition size
        int low = 0;
        int high = n;
        
        while(low <= high){
            int mid1 = (low + high) / 2;
            int mid2 = left - mid1;
            
            int l1 = (mid1 == 0 ? INT_MIN : nums1[mid1 - 1]);
            int r1 = (mid1 == n ? INT_MAX : nums1[mid1]);
            
            int l2 = (mid2 == 0 ? INT_MIN : nums2[mid2 - 1]);
            int r2 = (mid2 == m ? INT_MAX : nums2[mid2]);
            
            
            if(l1 <= r2 && l2 <= r1){
                if((n + m) % 2 == 1){
                    return max(l1,l2);
                }
                else{
                    // so that result is a floating-point (decimal) median, not an integer.
                    return((double)(max(l1,l2) + min(r1,r2)) / 2.0);
                }
            }
            if(l1 > r2){
                high = mid1 - 1;
            }
            else{
                low = mid1 + 1;
            }
        }
        return 0;        
    }
};