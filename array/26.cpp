/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 9/18/20.
 * Problem link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 */

#include <vector>

using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int> &nums) {
		if (nums.size() == 0)
			return 0;
		int count = 1;
		int prev = nums[0];
		for (int i = 1; i < nums.size(); i++) {
			if (nums[i] != prev) {
				prev = nums[i];
				nums[count] = nums[i];
				count++;
			}
		}
		return count;
	}
};
