class Solution {
    public:
        bool compareString(string& s, vector<string> words){
            int index = -1 ;
            
    
            return index ? -1 ;
        }
    
        vector<int> findSubstring(string s, vector<string>& words) {
            vector<string> temp = words;
            vector<int> indiciesFound = {};
            size_t wordLength = 0;
    
            for ( auto word : words ){
                wordLength += word.size();
                temp.push_back(word);
            }
    
    
            for ( size_t ndx = 0; ndx < s.size() - wordLength() - 1; ++ndx ){
                if ( s[ndx] == tempWord[0]  ){
                    
                }
            }
        }
    };