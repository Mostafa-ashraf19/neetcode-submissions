class Solution {
public:
    bool isValid(string s) {
        stack<char> stc;

        for(char c : s) {
            
            if(c == '(' || c == '{' || c == '[' ) {
                stc.push(c);
            } else {
                if(stc.empty())
                    return false;
                
                char tp = stc.top();
                stc.pop();
                if((tp == '(' && c != ')') ||
                (tp == '{' && c != '}')  ||
                (tp == '[' && c != ']'))
                    return false;
            }
        }
        return stc.empty();
    }
};
