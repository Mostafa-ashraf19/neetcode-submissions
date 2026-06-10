class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> vals;

        for(const auto& num : nums) {
                vals.insert(num);
        }

        return vals.size() != nums.size();
        
    }
};