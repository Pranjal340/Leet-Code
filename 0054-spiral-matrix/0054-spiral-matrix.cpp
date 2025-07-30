class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size(); // no of rows
        int m = matrix[0].size(); // no of cols;
        int x = 0, y = 0, total = m * n, count = 0;
        vector<int> ans;
        while(count < total){
            for(int i = y; i < m && count < total; i++){
                ans.push_back(matrix[x][i]);
                count++;
            }
            x++;
            for(int i = x ; i < n && count < total; i++){
                ans.push_back(matrix[i][m - 1]);
                count++;
            }
            m--;
            for(int i = m - 1; i >= y && count < total; i--){
                ans.push_back(matrix[n - 1][i]);
                count++;
            }
            n--;
            for(int i = n - 1; i >= x && count < total; i--){
                ans.push_back(matrix[i][y]);
                count++;
            }
            y++;
            
        }
        return ans;


    }
};