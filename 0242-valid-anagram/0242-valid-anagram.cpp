class Solution {
public:
    bool isAnagram(string s, string t) {
        // even better if u use hashmap
        if(s.length() != t.length()){
            return 0;
        }
        vector<int> v(26, 0);
        for(int i = 0; i < s.length() ; i++){
            int x = s[i] - 'a';
            v[x]++;
            int y = t[i] - 'a';
            v[y]--;
        }
        for(int i = 0; i < 26; i++){
            if(v[i] != 0){
                return 0;
            }
        }
        return 1;        
    }
};