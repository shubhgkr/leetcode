/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 9/18/20.
 * Problem link: https://leetcode.com/problems/height-checker/
 */

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int heightChecker(vector<int> &heights) {
		vector<int> copy(heights);
		sort(copy.begin(), copy.end());
		int cnt = 0;
		for (int i = 0; i < heights.size(); i++)
			cnt += (heights[i] != copy[i]);
		return cnt;
	}
};
