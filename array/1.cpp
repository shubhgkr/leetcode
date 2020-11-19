/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/19/20.
 * Problem link: https://leetcode.com/problems/two-sum/
 */


#include <vector>
#include <unordered_map>

class Solution {
public:
	std::vector<int> twoSum(std::vector<int> &nums, int target) {
		std::unordered_map<int, int> cache;
		std::vector<int> answer;

		for (size_t i = 0; i < nums.size(); ++i) {
			int needed_num = target - nums[i];

			if (cache.find(needed_num) != cache.end()) {
				answer.push_back(cache[needed_num]);
				answer.push_back(i);
				return answer;
			} else {
				cache.insert(make_pair(nums[i], i));
			}
		}
		return answer;
	}
};
