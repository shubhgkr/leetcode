/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 8/20/20.
 * Problem link: https://leetcode.com/problems/running-sum-of-1d-array/
 */

#include <vector>
#include <numeric>

class Solution {
public:
	std::vector<int> runningSum(std::vector<int> &nums) {
		std::vector<int> ans(nums.size(), 0);
		std::partial_sum(nums.begin(), nums.end(), ans.begin());
		return ans;
	}
};
