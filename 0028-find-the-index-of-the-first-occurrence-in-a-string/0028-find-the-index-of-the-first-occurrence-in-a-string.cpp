class Solution {
public:

    void constructLPS (string &needle, vector<int> &lps){
        int len = 0;
        
        lps[0] = 0;
        
        int i = 1;
        while (i < needle.length()){
            if(needle[i] == needle[len]){
                len++;
                lps[i] = len;
                i++;
            }
            else{
                if(len != 0){
                    len = lps[len - 1];
                }
                else{
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
    
    int strStr(string haystack, string needle) {
         int n = haystack.length();
        int m = needle.length();
        
        vector<int> lps(m);
        // vector<int> res;
        
        constructLPS(needle, lps);
        
        int i = 0;
        int j = 0;
        while(i < n){
            if(haystack[i] == needle[j]){
                i++;
                j++;
                
                if(j == m){
                    return i-j;
                    j = lps[j - 1];
                }
            }
            else{
                if(j != 0){
                    j = lps[j - 1];
                }
                else{
                    i++;
                }
            }
        }
        return -1;       
    }
};