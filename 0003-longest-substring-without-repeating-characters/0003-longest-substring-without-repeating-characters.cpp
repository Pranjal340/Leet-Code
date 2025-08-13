class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() <= 1){
            return s.length();
        } 
        vector<bool> visited(256, false);
        int ans = 0;
        
        int left = 0, right = 0;
        
        while(right < s.length()){
            
            while(visited[s[right]] == true){
                visited[s[left]] = false;
                left++;
            }
            
            visited[s[right]] = true;
            
            ans = max(ans, (right - left + 1));
            right++;
        }
        return ans;
    }        
};