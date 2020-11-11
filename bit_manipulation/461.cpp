/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/11/20.
 * Problem link: https://leetcode.com/problems/hamming-distance/
 */

class Solution {
public:
	int hammingDistance(int x, int y) {
		return __builtin_popcount(x ^ y);
	}
};
