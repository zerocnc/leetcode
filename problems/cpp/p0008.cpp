class Solution {
    public:
    
        int myAtoi(string s) {
    
            long long retNumber = 0;
            bool neg = false;
            bool findNumber = false;
            queue<int> integerQueue;
    
            if ( s.size() > 0 ){
                for (size_t ndx = 0; ndx < s.size(); ++ndx ){
    
                    if ( s[ndx] == '-' || s[ndx] == '+' ){
                        switch(s[ndx]){
                            case '-':
                            neg = true;
                            break;
                        case('+'):
                            neg = false;
                            break;
                        default:
                            break;
                        }
                    }
                    if ( isdigit( s[ndx] )  ){
                        retNumber *= 10;
                        retNumber += s[ndx] - '0';
                        findNumber = true;
                    }
                    else if ( findNumber ){
                        break;
                    }
    
                    if ( isalpha( s[ndx]) || s[ndx] == '.' ){
                        break;
                    }
                }
            }
    
        if ( neg ){
            retNumber *= -1;
        }
    
        if ( retNumber > INT_MAX ){
            retNumber = INT_MAX;
        }
        else if ( retNumber < INT_MIN ){
            retNumber = INT_MIN;
        }
    
    
            return (int) retNumber;
        }
    };