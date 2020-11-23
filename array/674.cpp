/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/23/20.
 * Problem link: https://leetcode.com/problems/longest-continuous-increasing-subsequence/
 */

#include <vector>

class Solution {
public:
	int findLengthOfLCIS(vector<int> &nums) {
		if (nums.size() == 0)
			return 0;
		int cnt = 1;
		int currCnt = 1;
		for (int i = 1; i < nums.size(); i++) {
			if (nums[i - 1] < nums[i])
				currCnt++;
			else {
				cnt = max(cnt, currCnt);
				currCnt = 1;
			}
		}
		return max(cnt, currCnt);
	}
};
