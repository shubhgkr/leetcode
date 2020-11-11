/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/11/20.
 * Problem link: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
 */

class Solution {
public:
	int numberOfSteps (int num) {
		return num ? __builtin_popcount(num) + 31 - __builtin_clz(num) : 0;
	}
};
