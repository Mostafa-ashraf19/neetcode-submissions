class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=0, r = nums.size() - 1, idx= 0;
        std::map<int, int> cnt;

        while(idx < nums.size()) {
            
            int tmp = target - nums[idx];
            if(cnt.find(tmp) != cnt.end()) {
                return {cnt[tmp], idx};
            } else {
                cnt[nums[idx]] = idx;
            }
            ++idx;
        }

        return {0,0};
    }
};
