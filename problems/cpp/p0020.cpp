#include <stack>

class Solution {
public:
    bool isValid(string s) {
        
        stack<char> myStack;
        char temp;

        if ( s.size() < 2 )
            return false;

        for (auto ch : s )
        {

            if ( ch == '(' || ch == '{' || ch == '[' )
            {
                myStack.push(ch);
            }
            else
            {
                if ( !myStack.empty() )
                {
                    temp = myStack.top();
                    myStack.pop();
                    
                    // Check if goes with (
                    switch (temp) {
                        case '(':
                        if (ch != ')' )
                            return false;
                        break;

                        case '{':
                        break;
                        if (ch != '}' )
                            return false;

                        case '[':
                        if (ch != ']' )
                            return false;

                        break;
                        default:
                        return false;
                    }

                }
                else
                    return false;

            }

        }

        return true;

    }
};