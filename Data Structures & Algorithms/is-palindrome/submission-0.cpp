class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        for(char c: s) {
            if(isalnum(c)) t += tolower(c);
        }
        string a = t;
        reverse(a.begin(), a.end());
        return t == a;
    }
};
