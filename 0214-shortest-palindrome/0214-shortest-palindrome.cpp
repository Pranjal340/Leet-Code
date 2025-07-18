class Solution {
public:
    /*
    bool isPalindrome(string s, int i, int j){
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;            
        }
        return true;
    }
    */

    vector<int> computeLPS (string &pat){
        int n = pat.length();
        vector<int> lps(n);
        int len = 0;
        lps[0] = 0;
        int i = 1;
        while(i < n){
            if(pat[i] == pat[len]){
                len++;
                lps[i] = len;
                i++;
            }
            else{
                if(len != 0){
                    len = lps[len-1];
                }
                else{
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
    }

    string shortestPalindrome(string s) {
        // string cnt;
        // int i = s.length() - 1;
        
        // while(i >= 0 && !isPalindrome(s, 0, i)){
        //     cnt = cnt + s[i];
        //     i--;
        // }
        // return cnt + s;

        int n = s.length();
        string rev = s;
        reverse(rev.begin(), rev.end());
        
        string a = s + '$' + rev;
        
        vector<int> lps = computeLPS(a);
        
        // int x = ;
        
        rev = rev.substr(0,n - lps.back());
        // reverse(b.begin(), b.end());
        s = rev + s;
        return s;
                
    }
};