/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/19/20.
 * Problem link: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
 */

#include<vector>

class Solution {
public:
	int countNegatives(std::vector <std::vector<int>> &grid) {
		int count = 0;
		int row = 0;
		for (int col = grid[0].size() - 1; col >= 0 && row < grid.size();) {
			if (grid[row][col] < 0) {
				count += (grid.size() - row);
				col--;
			} else {
				row++;
			}
		}
		return count;
	}
};
