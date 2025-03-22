#include <string>
#include <map>
#include <algorithm>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int left = 0, len = 0;
        std::map<char, int> dict;

        for (int right = 0; right < s.size(); right++) {

            if (dict.find(s[right]) != dict.end()) {
                left = std::max(left, dict[s[right]] + 1);
            }

            dict[s[right]] = right;

            len = std::max(len, right - left + 1);
        }
        return len;
    }
};