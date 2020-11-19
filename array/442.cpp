/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/19/20.
 * Problem link: https://leetcode.com/problems/find-all-duplicates-in-an-array/
 */


#include <vector>
#include <cmath>

class Solution {
public:
	std::vector<int> findDuplicates(std::vector<int> &nums) {
		std::vector<int> ans;
		for (int i = 0; i < nums.size(); i++) {
			int index = std::abs(nums[i]) - 1;
			if (nums[index] < 0) {
				ans.push_back(index + 1);
			}
			nums[index] = -nums[index];
		}
		return ans;
	}
};
