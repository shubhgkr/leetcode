/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/29/20.
 * Problem link: https://leetcode.com/problems/richest-customer-wealth/
 */

#include <vector>
#include <numeric>
#include <algorithm>

class Solution {
public:
	int maximumWealth(std::vector<std::vector<int>> &accounts) {
		int mx = 0;
		for (auto row:accounts) {
			mx = std::max(mx, std::accumulate(row.begin(), row.end(), 0));
		}
		return mx;
	}
};
