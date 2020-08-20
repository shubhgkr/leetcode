/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 8/20/20.
 * Problem link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
 */

#include <vector>
#include <algorithm>

class Solution {
public:
	std::vector<bool> kidsWithCandies(std::vector<int> &candies, int extraCandies) {
		int mx = *max_element(candies.begin(), candies.end());
		std::vector<bool> ans;
		for (int i:candies) {
			ans.push_back(i + extraCandies >= mx);
		}
		return ans;
	}
};
