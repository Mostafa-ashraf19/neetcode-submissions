class Solution {
public:

    int countOnes(int n) {
        int ones = 0;
        while(n > 0) {
            if(n%2)
                ++ones;
            
            n /=2;
        }
        return ones;
    }
    vector<int> countBits(int n) {
        std::vector<int> res;

        for(int i = 0; i <= n; ++i) {
            res.push_back(countOnes(i));
        }

        return res;
    }
};
