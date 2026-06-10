class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<vector<int>, vector<string>> mp;
        for(auto& str : strs) {

            vector<int> frq(26,0);
            for(auto& c : str)
                frq[c-'a']++;

            mp[frq].push_back(str);
        }

        vector<vector<string>> res;
        for(auto& vec : mp){
            res.push_back(vec.second);
        }

        return res;
    }
};
