class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> prefProduct(n), suffProduct(n), res(n);


    prefProduct[0] = 1;
    for (int i = 1; i < n; i++)
        prefProduct[i] = nums[i - 1] * prefProduct[i - 1];


    suffProduct[n - 1] = 1;
    for (int j = n - 2; j >= 0; j--)
        suffProduct[j] = nums[j + 1] * suffProduct[j + 1];


    for (int i = 0; i < n; i++)
        res[i] = prefProduct[i] * suffProduct[i];
	
    return res;       
    }
};