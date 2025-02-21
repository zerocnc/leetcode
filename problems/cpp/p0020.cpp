#include <stack>

class Solution {
public:
    bool isValid(string s) {
        
        stack<char> myStack;
        char temp;

        if ( s.size() < 2 )
            return false;

        for (int ndx = 0; ndx < s.size(); ndx++ )
        {

            char ch = s[ndx];
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
                    
                    switch (temp) {
                        case '(':
                        if (ch != ')' )
                            return false;
                        break;

                        case '{':
                        if (ch != '}' )
                            return false;
                        break;

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

        if (myStack.empty())
            return true;
        else
            return false;

    }
};