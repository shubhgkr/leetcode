/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/11/20.
 * Problem link: https://leetcode.com/problems/missing-number/
 */

#include <vector>

class Solution {
public:
	int missingNumber(vector<int> &nums) {
		int ans = 0;
		int a2 = 0;
		for (int i = 0; i < nums.size(); i++) {
			ans ^= (i + 1);
			a2 ^= nums[i];
		}
		return a2 ^ ans;
	}
};
