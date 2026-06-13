class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if(s.length() == 0 || s.length() == 1)
            return s.length();

        int l = 0,r=0;

        // vector<int> visted(26,0);
        unordered_map<char, bool> visited;
        
        int maxWSize  = 0;
        while(r < s.length()) {

            //  while(visted[s[r]-'a'] == true){

            //     visted[s[l]-'a'] = false;
            //     ++l;

            // }
            while (visited[s[r]]) {
                visited[s[l]] = false;
                l++;
            }


            // visted[s[r]-'a'] = true;
            visited[s[r]] = true;
            maxWSize = max((r-l+1), maxWSize);
            ++r;

        }
        return maxWSize;
    }
};
