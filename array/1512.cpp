/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 8/21/20.
 * Problem link: https://leetcode.com/problems/number-of-good-pairs/
 */

#include <vector>
#include <map>

class Solution {
public:
	int numIdenticalPairs(std::vector<int> &nums) {
		std::map<int, int> mp;
		for (int i:nums)
			mp[i]++;
		int sum = 0;
		for (auto it = mp.begin(); it != mp.end(); it++) {
			sum += it->second * (it->second - 1) / 2;
		}
		return sum;
	}
};
