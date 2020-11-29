/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/29/20.
 * Problem link: https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/
 */

#include <vector>
#include <algorithm>

class Solution {
public:
	int minCostToMoveChips(std::vector<int> &position) {
		int even = 0;
		int odd = 0;
		for (int pos:position)
			if (pos & 1)
				odd++;
			else
				even++;
		return std::min(odd, even);
	}
};
