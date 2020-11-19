/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/19/20.
 * Problem link: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
 */

#include <vector>
#include <cmath>

class Solution {
public:
	std::vector<int> findDisappearedNumbers(std::vector<int> &nums) {
		for (int num:nums) {
			int index = std::abs(num) - 1;
			nums[index] = -std::abs(nums[index]);
		}
		std::vector<int> ans;
		for (int i = 0; i < nums.size(); i++)
			if (nums[i] > 0) {
				ans.push_back(i + 1);
			}
		return ans;
	}
};
