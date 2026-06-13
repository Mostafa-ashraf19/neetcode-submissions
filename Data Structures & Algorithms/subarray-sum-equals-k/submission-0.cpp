class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> mp;
        
        int cnt = 0;
        int currSum = 0;
        // Pref[R] - Pref[L-1] = K ===>> Pref[L-1] = Pref[R] - K

        for(int i = 0; i < nums.size(); i++) {

            currSum += nums[i];

            if(currSum == k)
                cnt++;

            // Found
            if(mp.find(currSum - k) != mp.end()) {
                cnt += mp[currSum  - k];
                // cnt++;
            }
            // Not found
            mp[currSum]++;
        }
        return cnt;
        
    }
};