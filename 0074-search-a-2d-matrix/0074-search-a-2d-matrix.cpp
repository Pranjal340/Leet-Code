class Solution {
public:
    bool search(vector<int> matrix, int x){
        int low = 0;
        int high = matrix.size() - 1;
        
        while(low <= high){
            int mid = (low + high) / 2;
            
            if(matrix[mid] > x){
                high = mid - 1;
            }
            else if(matrix[mid] < x){
                low = mid + 1;
            }
            else{
                return true;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        for(int i = 0; i < n; i++){
            if(search(matrix[i], target)){
                return true;
            }
        }
        return false;
    }
};