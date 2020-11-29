/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/29/20.
 * Problem link: https://leetcode.com/problems/can-place-flowers/
 */

#include <vector>

class Solution {
public:
	bool canPlaceFlowers(std::vector<int> &bed, int n) {
		for (int i = 0; i < bed.size(); i++) {
			if (bed[i]) {
				i++;
			} else if (!bed[i] && (i == 0 || !bed[i - 1]) && (i == bed.size() - 1 || !bed[i + 1])) {
				bed[i] = 1;
				n--;
				i++;
			}
		}
		return n <= 0;
	}

};
