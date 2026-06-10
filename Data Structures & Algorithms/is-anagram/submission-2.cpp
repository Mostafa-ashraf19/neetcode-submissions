class Solution {
public:
    bool isAnagram(string s, string t) {
        
        std::vector<int> charFreq(26, 0);

        if(s.length() != t.length()) {
            return false;
        } else {
            for(int i=0; i < s.length(); ++i) {
                ++charFreq[s[i]-'a'];
            }
            for(int i=0; i < t.length(); ++i) {
                if(charFreq[t[i]-'a'] == 0)
                    continue;
                --charFreq[t[i]-'a'];
            }

            // for(const auto& v : charFreq) {
            //     if((v%2) != 0) 
            //         return false;
            // }
            // return true;
        }
        return std::accumulate(charFreq.begin(), charFreq.end(), 0) == 0;
    }
};
