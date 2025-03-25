class Solution {
    public:
        bool compareString(string& s, vector<string> words){
            int indexTemp = -1 ;
    
            for ( size_t ndx = 0; ndx < )
    
            index = indexTemp;
            return ( index > 0 ) ? true : false ;
        }
    
        vector<int> findSubstring(string s, vector<string>& words) {
            vector<string> temp = words;
            vector<int> indiciesFound = {};
            size_t wordLength = 0;
            size_t tempIndex = -1;
    
            for ( auto word : words ){
                wordLength += word.size();
                wordLength -= 1;
                temp.push_back(word);
            }
    
    
            for ( size_t ndx = 0; ndx < s.size() - wordLength() - 1; ++ndx ){
                for (size_t i = 0; ndx < s.size() - wordLength() - 1; ++i ){
                    if ( s[ndx] == tempWord[0]  ){
                        if ( compareString( s.substr( ndx, ndx + wordLength))){
                            indiciesFound.push_back(ndx);
                        }
                    }
                }
    
            }
    
            return indiciesFound;
        }
    };