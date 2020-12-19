/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 12/19/20.
 * Problem link: https://leetcode.com/problems/min-cost-climbing-stairs/
 */

#include<vector>

class Solution {
public:
	int minCostClimbingStairs(std::vector<int> &cost) {
		int n = cost.size();
		for (int i = 2; i < n; i++) {
			cost[i] += std::min(cost[i - 2], cost[i - 1]);
		}
		return std::min(cost[n - 1], cost[n - 2]);
	}
};
