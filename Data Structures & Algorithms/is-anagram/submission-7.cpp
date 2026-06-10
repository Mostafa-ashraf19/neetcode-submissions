class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;

        // Sol 1            
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // for(int i = 0; i < s.length(); ++i) 
        //     if(s[i] != t[i])
        //         return false;
        // return true;

        // Sol 2
        // unordered_map<char, int> mc;
        // for(char c : s)
        //     mc[c] += 1;
        // for(char c : t)
        //     mc[c] -= 1;
        // for(auto r : mc)
        //     if(r.second != 0)
        //         return false;
        // return true;

        // Sol 3
        vector<int> freq(26,0);
        for(char c : s)
            freq[c-'a'] += 1;
        for(char c : t)
            freq[c-'a'] -= 1;
        for(auto c : freq)
            if(c != 0)
                return false;
        return true;
    }
};
