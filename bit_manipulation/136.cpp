/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/11/20.
 * Problem link: https://leetcode.com/problems/single-number/
 */

#include <vector>

class Solution {
public:
	int singleNumber(std::vector<int> &nums) {
		int ans = 0;
		for (int v:nums)
			ans ^= v;
		return ans;
	}
};
