class Solution {
    public:
    
        int strStr(string haystack, string needle) {
    
            size_t point_1 = -1;
            size_t sizeOfWord = needle.size();
    
            if ( needle.size() <= haystack.size() ){
    
                // Locate first letter
                for ( size_t ndx = 0; ndx + needle.size() <= haystack.size(); ndx++ ){
    
                    if ( haystack[ndx] == needle[0] ){
                        // we compare the whole word.
    
                        for ( size_t ndx2 = needle.size() - 1; ndx2 >= 0; --ndx2 ){
                            if ( haystack[ndx+ndx2] != needle[ndx2]  )
                                break;
                            else if ( haystack[ndx] == needle[ndx2] && ndx2 == 0  )
                            {
                                return ndx;
                            }
                                
                        }
    
                    }
    
                }
                
    
            }
    
            return point_1;
        }
    };