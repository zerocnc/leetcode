/*
    - Longest Palindromic Substring -

	Given a string s, return the longest palindromic substring in s.

Example 1:

    Input: s = "babad"
    Output: "bab"
    Explanation: "aba" is also a valid answer.

Example 2:

    Input: s = "cbbd"
    Output: "bb"

Constraints:

    1 <= s.length <= 1000
    s consist of only digits and English letters.

*/

class Solution {
private:
	int max(int x, int y)
	{
		return (x < y) ? y : x;
	}

	int expandFromMiddle(std::string s, int left, int right)
	{
		if (s.empty() || left > right) {
			return 0;
		}

		while (left >= 0 && right < s.size() && s[left] == s[right]) {
			left--;
			right++;
		}

		return right - left - 1;
	}
public:
	std::string longestPalindrome(std::string s)
	{
		if ( s.empty() || s.size() < 1) {
			return "";
		}

		int start = 0;
		int end = 0;

		for (int i = 0; i < s.size(); i++) {
			int len_1 = expandFromMiddle(s, i, i);
			int len_2 = expandFromMiddle(s, i, i + 1);

			int len = max(len_1, len_2);

			if (len > end - start) {
				start = i - ((len - 1) / 2);
				end = i + (len / 2);
			}
		}

		return s.substr(start, end - start + 1 );
	}
};