class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> res;
        std::map<string, vector<string>> cnt;
        for(const auto& str: strs) {
            std::vector<int> strFreq(26, 0);
            for(const auto& c: str) {
                ++strFreq[c-'a'];
            }
            string key = to_string(strFreq[0]);
            for (int i = 1; i < 26; ++i) {
                key += ',' + to_string(strFreq[i]);
            }
            
            // if(cnt.find(strFre) != cnt.end()) {
                cnt[key].push_back(str);
            // } else {
                // ;
            // }
        }

        for(const auto& vec : cnt)
            res.push_back(vec.second);

        return res;
        
    }
};
