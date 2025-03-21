class Solution {
    public:
    
        bool compare(string segment, string word ){
    
            return true;
        }
    
        int strStr(string haystack, string needle) {
    
            size_t point_1 = -1;
            size_t sizeOfWord = needle.size();
    
            if ( needle.size() < haystack.size() ){
    
                // Locate first letter
                for ( size_t ndx = 0; ndx + needle.size() < haystack.size(); ndx++ ){
    
                    if ( haystack[ndx] == needle[0] ){
                        // we compare the whole word.
                        size_t needleSize = needle.size();
    
                        for ( size_t ndx2 = needleSize - 1; ndx2 >= 0; --ndx2 ){
                            if ( haystack[ndx] != needle[ndx2]  )
                                break;
                        }
    
                    }
    
                }
                
    
            }
    
            return point_1;
        }
    };