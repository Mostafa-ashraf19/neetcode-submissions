class Solution {
public:
    bool isPalindrome(string s) {

        s.erase(std::remove_if(s.begin(), s.end(), [](unsigned char c){ 
            return !std::isalnum(c);
             }), s.end());
        
        std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c){
            return tolower(c);
        });

        int l=0, r = s.length() - 1;
        for(int i = 0; i < s.length() / 2; ++i) {
            if(s[l++] != s[r--]) {
                return false;
            }
        }
        return true;
    }
};
