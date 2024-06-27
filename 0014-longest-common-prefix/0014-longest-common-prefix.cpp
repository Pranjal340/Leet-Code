class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string p = strs[0];
        for(string s : strs)
            while (s.find(p) != 0) 
                p = p.substr(0, p.length() - 1);
            

        return p;
        

    }
};