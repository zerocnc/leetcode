class Solution {
    public:
    
        int myAtoi(string s) {
    
            long long retNumber = 0;
            bool neg = false;
            bool detSignAlready = false;
            bool findNumber = false;
    
            if ( s.size() > 0 ){
                for (size_t ndx = 0; ndx < s.size(); ++ndx ){
    
                    if ( s[ndx] == '-' || s[ndx] == '+' ){
                        switch(s[ndx]){
                            case '-':
                            neg = true;
                            if ( detSignAlready){
                                ndx = s.size();
                            }
                            detSignAlready = true;
                            break;
                        case('+'):
                            neg = false;
                            if ( detSignAlready){
                                ndx = s.size();
                            }
                            detSignAlready = true;
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