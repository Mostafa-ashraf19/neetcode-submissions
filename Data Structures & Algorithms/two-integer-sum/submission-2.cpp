class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // int l=0, r = nums.size()-1;
        // // std::sort(nums.begin(), nums.end());
        
        // for(int i = 0; i < nums.size(); ++i) {
        //     if((nums[l] + nums[r]) < target) {
        //         ++l;
        //     } else if((nums[l] + nums[r]) > target) {
        //         --r;
        //     } else {
        //         return {l,r};
        //     }
        // }

        // return {0,0};

        std::map<int, int> m;

        for(int i = 0 ; i < nums.size(); ++i) {
            int diff = target - nums[i];
            if (m.find(diff) != m.end()) // m.find(diff) == m.end() not exits
                return {m[diff], i};
            m[nums[i]] = i;
        }

        return {0,0};
    }
};
