/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/29/20.
 * Problem link: https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/
 */

#include <vector>
#include <algorithm>

class Solution {
public:
	bool canMakeArithmeticProgression(std::vector<int> &arr) {
		std::sort(arr.begin(), arr.end());
		int diff = arr[0] - arr[1];
		for (int i = 1; i < arr.size() - 1; i++)
			if (arr[i] - arr[i + 1] != diff)
				return false;
		return true;
	}
};
