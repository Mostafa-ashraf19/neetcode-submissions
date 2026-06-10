class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> res;

        for(const auto& s : strs) {
            string sortedS = s;
            std::sort(sortedS.begin(), sortedS.end());
            res[sortedS].push_back(s);
        }

        vector<vector<string>> result;
        for(const auto& [key, val] : res) {
            result.push_back(val);
        }

        return result;

    }
};
