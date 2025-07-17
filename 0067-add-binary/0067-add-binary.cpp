class Solution {
public:
    string trimZeros(const string &s){
        size_t first = s.find('1');
        return (first == string::npos) ? "0" : s.substr(first);
    }
    //the above function is only required when input string with 0s in start is allowed
    string addBinary(string a, string b) {
        string res;
        int carry = 0;
        a = trimZeros(a);
        b = trimZeros(b);
        int i = a.length() - 1;
        int j = b.length() - 1;

        while(i >= 0 || j >= 0 || carry){
            if(i >= 0) carry += a[i--] - '0';
            if(j >= 0) carry += b[j--] - '0';

            res += carry % 2 + '0';
            carry /= 2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};