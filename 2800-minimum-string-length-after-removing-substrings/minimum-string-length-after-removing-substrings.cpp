class Solution {
public:
    

    int minLength(string s) {
        stack<char> stk; 

        for (char ch : s) {
            if (!stk.empty()) {
                char top = stk.top();

                if ((top == 'A' && ch == 'B') || (top == 'C' && ch == 'D')) {
                    stk.pop();
                    continue;
                }
            }
            stk.push(ch);
        }

        return stk.size(); 
    }
};