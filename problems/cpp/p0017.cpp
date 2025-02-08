#include <map>
#include <string>

std::map<char, std::string> myMap;
std::map<char, std::string>::iterator it;

class Solution {
public:

    vector<string> letterCombinations(string digits) {

        vector<std::string> parseString;
        vector<std::string> tempVec;
        std::string tempStr;

        // Inserting elements
        myMap['2'] ="abc";
        myMap['3'] ="def";
        myMap['4'] = "ghi";
        myMap['5'] = "jkl";
        myMap['6'] = "mno";
        myMap['7'] = "pqrs";
        myMap['8'] = "tuv";
        myMap['9'] = "wxyz";

        if (digits.size() == 0){
            return tempVec;
        }

        for ( int ndx = 0; ndx < digits.size(); ndx++ ){
            for (int x = 0; x < ndx; x++){
                tempStr += ;
            }
            tempVec.push_back(tempStr);
        }

        return tempVec;
    }
};