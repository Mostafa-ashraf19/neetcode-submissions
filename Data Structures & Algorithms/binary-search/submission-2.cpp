class Solution {
public:

    inline int getMid(const int& l, const int& r) {
        return ceil((l + r)/2);
    }
    int search(vector<int>& nums, int target) {
        
        int l = 0, r = nums.size();
        int mid = getMid(l,r);

        while(l <= r) {

            if(nums[mid] < target) {
                l = mid + 1;
                mid = getMid(l,r);
            } else if(nums[mid] > target) {
                r = mid - 1;
                mid = getMid(l,r);
            } else {
                return mid;
            }
        }
        return -1;
        
    }
};
