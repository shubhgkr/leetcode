/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/11/20.
 * Problem link: https://leetcode.com/problems/find-the-difference/
 */

#include <string>

class Solution {
public:
	char findTheDifference(std::string s, std::string t) {
		int ans = 0;
		for (char ch:s)
			ans ^= ch;
		for (char ch:t)
			ans ^= ch;
		return char(ans);
	}
};
