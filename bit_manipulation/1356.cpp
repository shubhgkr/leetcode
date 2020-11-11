/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/11/20.
 * Problem link: https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
 */

#include <vector>
#include <algorithm>
class Solution {
public:

	static bool compare(const int &a, const int &b) {
		int c1 = __builtin_popcount(a);
		int c2 = __builtin_popcount(b);
		if (c1 == c2)
			return a < b;
		return c1 < c2;
	}

	std::vector<int> sortByBits(std::vector<int> &arr) {
		std::sort(arr.begin(), arr.end(), compare);
		return arr;
	}
};
