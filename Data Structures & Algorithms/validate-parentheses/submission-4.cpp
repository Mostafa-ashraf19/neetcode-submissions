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
        for(const auto& c : s) {
            if(isNotAlpha(c))
               { stk.push(c);}
            
            if(c == '}' || c == ')' || c == ']') {
                if(stk.size() <= 1)
                    return false;
                    
                if(!stk.empty()) {
                    stk.pop();
                    if(stk.top() == par[c]) {
                        stk.pop();
                    } else {
                        return false;
                    }
                }
            }
        }
        
        return stk.empty();
    }
};
