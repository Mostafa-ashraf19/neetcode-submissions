class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Sol 1
        // map<vector<int>, vector<string>> mp;
        // for(auto& str : strs) {
        //     vector<int> frq(26,0);
        //     for(auto& c : str)
        //         frq[c-'a']++;
        //     mp[frq].push_back(str);
        // }
        // vector<vector<string>> res;
        // for(auto& vec : mp){
        //     res.push_back(vec.second);
        // }
        // return res;

        // Sol 2
        unordered_map<string, vector<string>> mp;
        for(auto& str : strs) {
            auto key = str;
            sort(key.begin(), key.end());
            mp[key].push_back(str);
        }
        vector<vector<string>> res;
        for(auto& vec : mp){
            res.push_back(vec.second);
        }
        return res;
    }
};
