/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/8/20.
 * Problem link: https://leetcode.com/problems/three-consecutive-odds/
 */

#include <vector>

class Solution {
public:
	bool threeConsecutiveOdds(std::vector<int> &arr) {
		int cnt = 0;
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] & 1)
				cnt++;
			else
				cnt = 0;
			if (cnt == 3)
				return true;
		}
		return false;
	}
};
