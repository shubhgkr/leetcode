/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/19/20.
 * Problem link: https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
 */

#include <vector>

class Solution {
public:
	std::vector<int> replaceElements(std::vector<int> &arr) {
		int mx = -1;
		for (int i = arr.size() - 1; i >= 0; i--) {
			int tmp = arr[i];
			arr[i] = mx;
			mx = std::max(mx, tmp);
		}
		return arr;
	}
};
