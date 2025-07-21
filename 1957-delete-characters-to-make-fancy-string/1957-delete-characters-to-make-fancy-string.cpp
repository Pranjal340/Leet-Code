class Solution {
public:
    string makeFancyString(string s) {
        string ans;
        char c = s[0];
        int cnt = 1;
        ans.push_back(s[0]);
        for(int i = 1; i < s.length(); i++){
            if(s[i] == c && cnt == 2){
                continue;
            }
            else if(s[i] != c){
                c = s[i];
                cnt = 0;
            }
            cnt++;
            ans.push_back(s[i]);

        }
        return ans;
    }
};