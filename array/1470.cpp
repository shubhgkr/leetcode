/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 8/20/20.
 * Problem link: https://leetcode.com/problems/shuffle-the-array/
 */

class Solution {
public:
	vector<int> shuffle(vector<int>& nums, int n) {
		vector<int> ans;
		for(int i=0;i<n;i++){
			ans.push_back(nums[i]);
			ans.push_back(nums[n+i]);
		}
		return ans;
	}
};
