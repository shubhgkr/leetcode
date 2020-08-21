/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 8/22/20.
 * Problem link: https://leetcode.com/problems/paint-house/
 */

#include <vector>
#include <algorithm>

class Solution {
public:
	int paintHouse(std::vector<std::vector<int>> houses) {
		for (int i = 1; i < houses.size(); i++) {
			houses[i][0] += std::min(houses[i - 1][1], houses[i - 1][2]);
			houses[i][1] += std::min(houses[i - 1][0], houses[i - 1][2]);
			houses[i][2] += std::min(houses[i - 1][0], houses[i - 1][1]);
		}
		return *std::min_element(houses[houses.size() - 1].begin(), houses[houses.size() - 1].end());
	}
};
