class Solution {
public:
    inline bool isNotAlpha(const char& c) {
        return c == '{' || c == '(' || c == '[' || c == '}' || c == ')' || c == ']';
    }
    bool isValid(string s) {
        
        std::stack<char> stk;
        std::map<char, char> par = {
            {'}','{'},
            {')','('},
            {']','['}
        };
        int i = 0;
        while(i < s.length()) {
            if(isNotAlpha(s[i]))
               { stk.push(s[i]);}
            
            if(s[i] == '}' || s[i] == ')' || s[i] == ']') {
                if(stk.size() <= 1)
                    return false;
                    
                if(!stk.empty()) {
                    stk.pop();
                    if(stk.top() == par[s[i]]) {
                        stk.pop();
                    } else {
                        return false;
                    }
                }
            }
            ++i;
        }
        
        return stk.empty();
    }
};
