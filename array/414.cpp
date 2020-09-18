/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 9/19/20.
 * Problem link: https://leetcode.com/problems/third-maximum-number/
 */

#include <vector>
#include <set>

using namespace std;

class Solution {
public:
	int thirdMax(vector<int> &nums) {
		set<int> arr(nums.begin(), nums.end());
		if (arr.size() < 3)
			return *arr.rbegin();
		return *std::next(arr.begin(), arr.size() - 3);
	}
};
