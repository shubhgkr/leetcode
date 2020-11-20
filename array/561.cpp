/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/20/20.
 * Problem link: https://leetcode.com/problems/array-partition-i/
 */

#include <vector>
#include <algorithm>

class Solution {
public:
	int arrayPairSum(std::vector<int> &nums) {
		std::sort(nums.begin(), nums.end());
		int sum = 0;
		for (int i = 0; i < nums.size(); i += 2)
			sum += nums[i];
		return sum;
	}
};
