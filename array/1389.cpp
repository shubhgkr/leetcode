/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 9/17/20.
 * Problem link: https://leetcode.com/problems/create-target-array-in-the-given-order/
 */

#include <vector>

using namespace std;

class Solution {
public:
	vector<int> createTargetArray(vector<int> &nums, vector<int> &index) {
		vector<int> ans;
		for (int i = 0; i < nums.size(); i++) {
			ans.insert(ans.begin() + index[i], nums[i]);
		}
		return ans;
	}
};
