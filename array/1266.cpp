/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/29/20.
 * Problem link: https://leetcode.com/problems/minimum-time-visiting-all-points/
 */

#include <vector>
#include <algorithm>

class Solution {
public:
	int minTimeToVisitAllPoints(std::vector<std::vector<int>> &points) {
		int sum = 0;
		for (int i = 0; i < points.size() - 1; i++) {
			sum += std::max(std::abs(points[i][0] - points[i + 1][0]), std::abs(points[i][1] - points[i + 1][1]));
		}
		return sum;
	}
};
