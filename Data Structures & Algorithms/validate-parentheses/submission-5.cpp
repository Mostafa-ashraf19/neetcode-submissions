class Solution {
public:
    inline bool isNotAlpha(const char& c) {
        return c == '{' || c == '(' || c == '[' || c == '}' || c == ')' || c == ']';
    }
    // bool isValid(string s) {
        
        // std::stack<char> stk;
        // std::map<char, char> par = {
        //     {'}','{'},
        //     {')','('},
        //     {']','['}
        // };
        // int i = 0;
        // for(const auto& c : s) {
        //     if(isNotAlpha(c))
        //        { stk.push(c);}
            
        //     if(c == '}' || c == ')' || c == ']') {
        //         if(stk.size() <= 1)
        //             return false;
                    
        //         if(!stk.empty()) {
        //             stk.pop();
        //             if(stk.top() == par[c]) {
        //                 stk.pop();
        //             } else {
        //                 return false;
        //             }
        //         }
        //     }
        // }
        
        // return stk.empty();
    // }
    bool isValid(string s) {
        stack<char> stc;

        for(auto c : s){

            if(c == '(' ||  c == '{' || c == '[') {
                stc.push(c);
            } else {
                if(stc.empty()) return false;

                char top = stc.top(); stc.pop();
                if((c == ')' && top != '(') ||  (c == ']' && top != '[') || (c == '}' && top != '{'))
                    return false;
            }

        }

        return stc.empty();
    }

};
