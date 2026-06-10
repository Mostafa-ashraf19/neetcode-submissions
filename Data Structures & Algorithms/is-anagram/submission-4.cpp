class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != s.size())
            return false;

        std::map<char, int> cnt_s;//, cnt_t;
 for (const auto& ch : s) {
        cnt_s[ch] += 1;  // increments count, default 0 if not present
    }

    for (const auto& ch : t) {
        cnt_s[ch] -= 1;
    }
        // for(const auto& _s : s) {
        //     if(cnt_s.find(_s) != cnt_s.end()) {
        //         cnt_s[_s]+= 1;
        //     } else {
        //         cnt_s[_s] = 0;
        //     }
        // }
        
        // for(const auto& _t : t) {
        //     if(cnt_s.find(_t) != cnt_s.end()) {
        //         cnt_s[_t]-= 1;
        //     } else {
        //         cnt_s[_t] = 0;
        //     }
        // }

        // bool isValid_cnt_s = true;
        // for( auto& c : cnt_s) {
        //     if(cnt_s[c.first] != *cnt_t.find(c.first))
        //         isValid_cnt_s = false;
        // }

        // bool isValid_cnt_t = true;
        // for( auto& c : cnt_t) {
        //     if(cnt_s[c.first] != cnt_t[c.first])
        //         isValid_cnt_t = false;
        // }

        for (const auto& p : cnt_s) {
        if (p.second != 0)
            return false;
        }

        return true;
    }
};
