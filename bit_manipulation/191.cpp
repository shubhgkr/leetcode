/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/11/20.
 * Problem link: https://leetcode.com/problems/number-of-1-bits/
 */

#include <cstdint>

class Solution {
public:
	int hammingWeight(std::uint32_t n) {
		int count = 0;
		while (n) {
			n &= (n - 1);
			count++;
		}
		return count;
	}
};
