/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 9/17/20.
 * Problem link: https://leetcode.com/problems/decompress-run-length-encoded-list/
 */

#include <vector>

using namespace std;

class Solution {
public:
	vector<int> decompressRLElist(vector<int> &nums) {
		vector<int> ans;
		for (int i = 0; i < nums.size(); i += 2) {
			for (int cnt = 1; cnt <= nums[i]; cnt++)
				ans.push_back(nums[i + 1]);
		}
		return ans;
	}
};
